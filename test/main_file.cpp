#include "SDL.h"
#include "SDL_image.h"
#include <stdexcept>
#include <iostream>

//http://lazyfoo.net/tutorials/SDL/08_geometry_rendering/index.php

SDL_Window *window = NULL; 
SDL_Surface *screenSurface = NULL;
SDL_Surface *helloWorld = NULL;

SDL_Renderer* renderer = NULL;

SDL_Texture* texture  = NULL;

SDL_Rect stretchRect;

std::string path = "C:/Users/tmoraes/Documents/GameProjects/Main/test_gradation_640x480.bmp";

bool setup( int width, int height ){
    bool success = true;
    SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2

    // Create an application window with the following settings:
    window = SDL_CreateWindow(
        "An SDL2 window",                  // window title
        SDL_WINDOWPOS_UNDEFINED,           // initial x position
        SDL_WINDOWPOS_UNDEFINED,           // initial y position
        width,                               // width, in pixels
        height,                               // height, in pixels
        SDL_WINDOW_OPENGL                  // flags - see below
    );
    
    // Check that the window was successfully created
    if (window == NULL) {
        // In the case that the window could not be made...
        printf("Could not create window: %s\n", SDL_GetError());
        success = false;
    }
    else{   
        renderer = SDL_CreateRenderer( window, -1, SDL_RENDERER_ACCELERATED );
        if(renderer == NULL){
            success = false;
        }
        else{
            SDL_SetRenderDrawColor( renderer, 0xFF, 0xFF, 0xFF, 0xFF );
            screenSurface = SDL_GetWindowSurface( window ); 
        }
               
    }
    return success;
}
void processEvents(){
    SDL_Event event;
 
    while ( SDL_PollEvent(&event) != 0 )
    {
        if ( event.type == SDL_QUIT )
        {
            exit( 0 );
        }    
        else if(event.type == SDL_KEYDOWN){
            switch( event.key.keysym.sym ){
                case SDLK_UP:                    
                    break;
                    
                case SDLK_DOWN:
                    break;
                    
                case SDLK_LEFT:
                    break;
                    
                case SDLK_RIGHT:
                    break;
                
                case SDLK_ESCAPE:
                    exit(0);
            }
        }
    }
}
SDL_Surface* loadMedia( std::string pathFile ){    
    SDL_Surface* optimizedSurface = NULL;
    SDL_Surface* loadedSurface = IMG_Load( pathFile.c_str() );
    //SDL_Surface* loadedSurface = SDL_LoadBMP(pathFile.c_str());
    
    if (loadedSurface == NULL){
        return NULL;
    }
    else{
        optimizedSurface = SDL_ConvertSurface( loadedSurface, screenSurface->format, NULL );
        if ( optimizedSurface == NULL ){
            return NULL;
        }
        
        SDL_GetWindowSize( window, &stretchRect.w, &stretchRect.h );
        
        stretchRect.w /= 2;
        stretchRect.h /= 2;
        
        stretchRect.x = 0;
        stretchRect.y = 0;
        
        SDL_FreeSurface( loadedSurface );
    }
    
    return optimizedSurface;
}
SDL_Texture* loadTexture( std::string pathFile){
    SDL_Texture* newTexture = NULL;
    SDL_Surface* loadSurface = IMG_Load(pathFile.c_str());
    if (loadSurface == NULL){
        return NULL;
    }
    else{
        newTexture = SDL_CreateTextureFromSurface(renderer, loadSurface);
    }
    SDL_FreeSurface(loadSurface);
}
void close(){
    SDL_FreeSurface( helloWorld );
    helloWorld = NULL;
    
    SDL_DestroyTexture( texture );
    texture = NULL;
    
    SDL_DestroyRenderer( renderer );
    renderer = NULL;
    
    SDL_DestroyWindow( window );
    window = NULL;
    
    IMG_Quit();
    SDL_Quit();
}
int main_temp( int argc, char* argv[] ) {
    bool success = setup( 640, 480 );   
    helloWorld = loadMedia( path );
    
    if( helloWorld == NULL ){
        success = false;
    }
    
    while ( success ){
        processEvents();
        //SDL_BlitSurface( helloWorld, NULL, screenSurface, NULL );
        SDL_BlitScaled( helloWorld, NULL, screenSurface, &stretchRect );
        SDL_UpdateWindowSurface( window );
        
    }
    SDL_Delay( 1000 ); 
    close();
    return 0;
}