#include "main.h"

#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    // parsing args
    for (int i = 1; i < argc; ++i)
    {
        if (string(argv[i]) == "--test")
        {
                // TODO configurable test modes
                g_runningMode |= RunningModes::TestMode;
        }
        else
        {    
            // TODO print help if verbose mode enabled
        }
    }

    // run test cases
    if (g_runningMode && RunningModes::TestMode)
    {
        main_test();
    }

    return 0;
}

int main_test()
{
    cout << "# Running tests..." << endl;
    RenderWindow testWindow;
    testWindow.InitWindow();
    testWindow.ShowWindow();
    SDL_Delay(5000);

    return 0;
}