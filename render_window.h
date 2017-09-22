#pragma once

#include <SDL.h>
#include "global_functions.h"

class RenderWindow
{
    string m_windowTitle = "";
    Rect m_windowShape = {SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600};

    SDL_Window *m_window = NULL;
    SDL_Surface *m_surface = NULL;

  public:
    RenderWindow();

    // Init SLD window subsystem
    void InitWindow();
    void ShowWindow();
};