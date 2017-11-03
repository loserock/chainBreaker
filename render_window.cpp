#include "render_window.h"

RenderWindow::RenderWindow()
{
}

RenderWindow::~RenderWindow()
{
    if (m_window)
        SDL_DestroyWindow(m_window);
    
}

void RenderWindow::InitWindow()
{
    int ec = 0;
    ec = SDL_Init(SDL_INIT_VIDEO);
    ASSERT_WITH_LOGS(!ec)
    auto &w = m_windowShape;
    m_window = SDL_CreateWindow(m_windowTitle.c_str(), w.x, w.y, w.width, w.height, SDL_WINDOW_HIDDEN);
    ASSERT_WITH_LOGS(m_window)
    m_surface = SDL_GetWindowSurface(m_window);
    ASSERT_WITH_LOGS(m_surface)
    Uint32 _renderSettings = (m_useRenderAccelerated ? SDL_RENDERER_ACCELERATED : SDL_RENDERER_SOFTWARE);
    m_renderer = SDL_CreateRenderer(m_window, -1, _renderSettings);
    ASSERT_WITH_LOGS(m_renderer)
    
    // TODO
}

void RenderWindow::ShowWindow()
{
    ASSERT(m_window);
    int ec = 0;
    SDL_ShowWindow(m_window);
    SDL_RaiseWindow(m_window);
    ec = SDL_UpdateWindowSurface(m_window);
    ASSERT_WITH_LOGS(!ec)
}