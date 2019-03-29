#ifndef GAME_H
#define GAME_H

#include "SDL.h"
#include "SDL_image.h"

#include "TextureManager.h"

#include "Player.h"

class Game
{
public:
    Game();
    ~Game();
    
    bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
    void render();
    void update();
    void handleEvents();
    void clean();
    bool running(){return m_bRunning;}
    
private:
    SDL_Window* m_pWindow;
    SDL_Renderer* m_pRenderer;
    
    //SDL_Texture* m_pTexture;
    //SDL_Rect m_sourceRectangle;
    //SDL_Rect m_destinationRectangle;
    
    int m_currentFrame;
    //TextureManager m_textureManager;
    
    typedef TextureManager TheTextureManager;
    
    bool m_bRunning;
    
    GameObject m_go;
    Player m_player;
};

#endif // GAME_H
