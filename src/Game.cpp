#include "Game.h"

Game::Game()
{
}

Game::~Game()
{
}

bool Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
    int flags = 0;
    
    m_go.load(100, 100, 82, 104, "animate");
    m_player.load(300, 300, 82, 104, "animate");
    
    if (fullscreen)
    {
        flags = SDL_WINDOW_OPENGL;
    }
    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        m_pWindow = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        
        if(m_pWindow != 0)
        {
            m_pRenderer = SDL_CreateRenderer(m_pWindow, -1, 0);
            
            if(m_pRenderer != 0)
            {
                SDL_SetRenderDrawColor(m_pRenderer, 255, 255, 255, 255);
                
                //SDL_Surface* pTempSurface = SDL_LoadBMP("C:/Users/tmoraes/Documents/GameProjects/Main/assets/img/alienBeige.bmp");
                //SDL_Surface* pTempSurface = SDL_LoadBMP("C:/Users/tmoraes/Documents/GameProjects/Main/assets/img/run.bmp");
                //SDL_Surface* pTempSurface = IMG_Load("C:/Users/tmoraes/Documents/GameProjects/Main/assets/img/run.png");
                
                //m_pTexture = SDL_CreateTextureFromSurface(m_pRenderer, pTempSurface);
                //SDL_FreeSurface(pTempSurface);
                                        
                //SDL_QueryTexture(m_pTexture, NULL, NULL, &m_sourceRectangle.w, &m_sourceRectangle.h);
               // m_sourceRectangle.w /= 8;
                //m_sourceRectangle.h = 105;
                                
               // m_destinationRectangle.x = m_sourceRectangle.x = 0;
               // m_destinationRectangle.y = m_sourceRectangle.y = 0;
               // m_destinationRectangle.w = m_sourceRectangle.w;
               // m_destinationRectangle.h = m_sourceRectangle.h;                
                
                //m_textureManager.load("C:/Users/tmoraes/Documents/GameProjects/Main/assets/img/run.png", "animate", m_pRenderer);
                if(!TheTextureManager::Instance()->load("C:/Users/tmoraes/Documents/GameProjects/Main/assets/img/run.png", "animate", m_pRenderer))
                    return false;
            }
            else
            {
                return false;
            }        
        }
        else{
            return false;
        }        
    }
    else
    {
        return false;
    }
    
    return m_bRunning = true;
}

void Game::render()
{
    SDL_RenderClear(m_pRenderer);
    //SDL_RenderCopy(m_pRenderer, m_pTexture,(const SDL_Rect*)&m_sourceRectangle, (const SDL_Rect*)&m_destinationRectangle);
    //SDL_RenderCopyEx(m_pRenderer, m_pTexture, &m_sourceRectangle, &m_destinationRectangle, 0, 0, SDL_FLIP_HORIZONTAL);
     //m_textureManager.draw("animate", 0, 0, 82, 104, m_pRenderer);
     //TheTextureManager::Instance()->draw("animate", 0, 0, 82, 104, m_pRenderer);
     //m_textureManager.drawFrame("animate", 100, 100, 82, 104, 1, m_currentFrame, m_pRenderer);
     //TheTextureManager::Instance()->drawFrame("animate", 100, 100, 82, 104, 1, m_currentFrame, m_pRenderer);
     
     m_go.draw(m_pRenderer);
     m_player.draw(m_pRenderer);
      
    SDL_RenderPresent(m_pRenderer);
}

void Game::clean()
{
    SDL_DestroyWindow(m_pWindow);
    SDL_DestroyRenderer(m_pRenderer);
    SDL_Quit();
}

void Game::handleEvents()
{
    SDL_Event event;
    
    if(SDL_PollEvent(&event))
    {
        switch(event.type)
        {
            case SDL_QUIT:
                m_bRunning = false;
                break;
            default:
                break;
        }
    }
}
void Game::update()
{
  //m_sourceRectangle.x = m_sourceRectangle.w * int(((SDL_GetTicks() / 100) % 6));
  //m_currentFrame = int(((SDL_GetTicks() / 100) % 6));
    m_go.update();
    m_player.update();
}