#pragma once

#include <stdio.h>
#include <iostream>
#include <SDL.h>
#include "global_constants.h"
#include "global_settings.h"
#include "render_window.h"

// main function with argument parsing
int main(int argc, char *argv[]);

// run various tests
int main_test();

// #ifdef _WIN32
// #include <Windows.h>

//     int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPWSTR lpCmdLine, int nShowCmd)
//     {
//         main(2, {"chainBreaker.exe","--test"});
//     };
// #endif