#include "render_window.h"

RenderWindow::RenderWindow()
{
}

void RenderWindow::InitWindow()
{
    ASSERT(SDL_Init(SDL_INIT_VIDEO) < 0);
    auto &w = m_windowShape;
    m_window = SDL_CreateWindow(m_windowTitle.c_str(), w.x, w.y, w.width, w.height, SDL_WINDOW_MAXIMIZED /*TODO SDL_WINDOW_HIDDEN*/);
    m_surface = SDL_GetWindowSurface(m_window);
    
    // TODO
}

void RenderWindow::ShowWindow()
{
    ASSERT(m_window);
    SDL_RaiseWindow(m_window);
    // show the window to visible
}