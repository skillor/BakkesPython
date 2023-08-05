#pragma once

#include "bakkesmod/plugin/bakkesmodplugin.h"
#include "bakkesmod/plugin/pluginwindow.h"
#include "bakkesmod/plugin/PluginSettingsWindow.h"
#include "GuiBase.h"

#include <pybind11/embed.h> // everything needed for embedding
namespace py = pybind11;

#include "version.h"
constexpr auto plugin_version = stringify(VERSION_MAJOR) "." stringify(VERSION_MINOR) "." stringify(VERSION_PATCH) "." stringify(VERSION_BUILD);


class PythonPlugin: public BakkesMod::Plugin::BakkesModPlugin,
	public SettingsWindowBase
	//,public PluginWindowBase // Uncomment if you want to render your own plugin window
{

	//Boilerplate
	void onLoad() override;
	void onUnload() override;
public:
	void RenderSettings() override; // Uncomment if you wanna render your own tab in the settings menu
	//void RenderWindow() override; // Uncomment if you want to render your own plugin window
private:
	// std::vector<std::shared_ptr<py::module>> pyModules;
	std::vector<std::string> pyModules;
	// py::scoped_interpreter interpreter{};
};
