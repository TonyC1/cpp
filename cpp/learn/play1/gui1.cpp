// This program demonstrates the string class.
#include <iostream>
#include <string> // Required for the string class.
#include "imgui/imgui.h"
using namespace std;

int main()
{

    imgui::ImGui::Text("Hello, world %d", 123);
    if (ImGui::Button("Save"))
        MySaveFunction();
    ImGui::InputText("string", buf, IM_ARRAYSIZE(buf));
    ImGui::SliderFloat("float", &f, 0.0f, 1.0f);

}
