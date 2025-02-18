#include "pch.h"
#include "PythonPlugin.h"

// PY
#include <pybind11/embed.h> // everything needed for embedding
namespace py = pybind11;
using namespace py::literals;

// PYBAKKE
#include <pybakke.h>


BAKKESMOD_PLUGIN(PythonPlugin, "Python Plugin", plugin_version, PLUGINTYPE_FREEPLAY)

std::shared_ptr<CVarManagerWrapper> _globalCvarManager;
std::shared_ptr<GameWrapper> _globalGameWrapper;

void PythonPlugin::onLoad()
{
	// This line is required for LOG to work and must be before any use of LOG()
	_globalCvarManager = cvarManager;
	_globalGameWrapper = gameWrapper;

	_globalCvarManager->registerNotifier("python_reload", std::bind(&PythonPlugin::softReload, this), "Reloads all python modules", PERMISSION_ALL);

	py::initialize_interpreter();

	auto pybakkes = py::module::import("pybakke");

	this->loadModules();
	
	LOG("Loaded PythonPlugin");
}

void PythonPlugin::onUnload() {

	this->unloadModules();

	// py::finalize_interpreter();

	LOG("Unloaded PythonPlugin");
}

void PythonPlugin::loadModules() {
	auto locals = py::dict("GAME_WRAPPER"_a = _globalGameWrapper, "CVAR_MANAGER"_a = _globalCvarManager);
	py::exec(R"(
		import pybakke
		import os
		from pkgutil import iter_modules
		from importlib.machinery import SourceFileLoader

		modules = {}
		for module_dir in [
			os.path.join(os.getenv('APPDATA'), 'bakkesmod', 'bakkesmod', 'data', 'python'),
			os.path.join(os.getenv('APPDATA'), 'bakkesmod', 'bakkesmod', 'plugins'),
		]:
			for module in iter_modules(path=[module_dir]):
				if module.name in modules:
					CVAR_MANAGER.log('Skipping duplicate module "{}" in "{}"'.format(module.name, module_dir))
					continue
				try:
					m = SourceFileLoader(module.name, os.path.join(module_dir, module.name + '.py')).load_module()
					if hasattr(m, 'onLoad'):
						m.onLoad(GAME_WRAPPER, CVAR_MANAGER)
					modules[module.name] = m
					CVAR_MANAGER.log('Loaded module "{}" from "{}"'.format(module.name, module_dir))
				except Exception as e:
					CVAR_MANAGER.log('Failed loading module "{}" from "{}": {}'.format(module.name, module_dir, e))
		modules = list(modules.keys())
	)", py::globals(), locals);

	pyModules = locals["modules"].cast<std::vector<std::string>>();
}

void PythonPlugin::unloadModules() {
	auto locals = py::dict("LOADED_MODULES"_a = pyModules, "GAME_WRAPPER"_a = _globalGameWrapper, "CVAR_MANAGER"_a = _globalCvarManager);
	py::exec(R"(
		import pybakke
		import sys

		for module in LOADED_MODULES:
			try:
				m = sys.modules[module]
				if hasattr(m, 'onUnload'):
					m.onUnload()
				CVAR_MANAGER.log('Unloaded module "{}"'.format(module))
			except Exception as e:
				CVAR_MANAGER.log('Failed unloading module "{}": {}'.format(module, e))
	)", py::globals(), locals);

	pyModules.clear();
}

void PythonPlugin::softReload() {
	this->unloadModules();
	this->loadModules();
}
