#include "pch.h"
#include "PythonPlugin.h"

void PythonPlugin::RenderSettings() {
    if (ImGui::Button("Reload")) {
        LOG("Reloading...");
        PythonPlugin::onUnload();
        PythonPlugin::onLoad();
    }
}