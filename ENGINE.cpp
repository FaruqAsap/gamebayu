#include "ENGINE.h"
#include <iostream>

// Initialize the static member
ENGINE* ENGINE::a_Instance = nullptr;

ENGINE* ENGINE::GetInstance()
{
    if (a_Instance == nullptr) {
        a_Instance = new ENGINE();
    }
    return a_Instance;
}

bool ENGINE::Init()
{
    m_IsRunning = true;
    std::cout << "Engine initialized." << std::endl;
    return m_IsRunning; // Return true to indicate successful initialization
}

void ENGINE::Clean()
{
    std::cout << "Cleaning up..." << std::endl;
}

void ENGINE::Quit()
{
    std::cout << "Quitting application..." << std::endl;
    if (a_Instance != nullptr) {
        delete a_Instance;
        a_Instance = nullptr;
    }
}

void ENGINE::Update()
{
    std::cout << "Updating..." << std::endl;
}

void ENGINE::Render()
{
    std::cout << "Rendering..." << std::endl;
}

void ENGINE::Events()
{
    std::cout << "Handling events..." << std::endl;
}
