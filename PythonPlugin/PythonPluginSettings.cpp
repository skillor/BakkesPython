#include "pch.h"
#include "PythonPlugin.h"

void PythonPlugin::RenderSettings() {
    if (ImGui::Button("Soft Reload")) {
        LOG("Soft Reloading...");
        this->softReload();
    }
}