#include <iostream>
// for initializing and shutdown functions
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <SDL2/SDL_timer.h>
#include "game.h"

using namespace::std;

int main(){
    Game game;
    
    return game.OnExecute();
}