#include "ENGINE.h"
#include <iostream>

int main(int argc, char *argv[])
{
    ENGINE* engine = ENGINE::GetInstance();

    if (!engine->Init()) {
        std::cerr << "Failed to initialize engine!" << std::endl;
        return 1; // Exit with error code
    }

    while (engine->IsRunning()) {
        engine->Events();
        engine->Update();
        engine->Render();
    }

    engine->Clean();
    engine->Quit();

    return 0;
}
