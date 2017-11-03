#pragma once

#include <SDL.h>
#include "global_functions.h"

class RenderWindow
{
    string m_windowTitle = "";
    Rect m_windowShape = {SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600};
    bool m_useRenderAccelerated = true;

    SDL_Window *m_window = NULL;
    SDL_Surface *m_surface = NULL;
    SDL_Renderer *m_renderer = NULL;

  public:
    RenderWindow();
    virtual ~RenderWindow();

    // Init SLD window subsystem
    void InitWindow();
    void ShowWindow();
};
