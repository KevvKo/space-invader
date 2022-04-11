#include <iostream>
#include "game.h"
#include "definitions.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>

using namespace::std;

void Game::App() {
	Running = true;
	OnExecute();
}

int Game::OnExecute(){
	
	OnInit();

    SDL_Event event;

    player.x = 300;
    player.y = 300;
 	player.texture = IMG_LoadTexture(renderer, "assets/ship1.png");
;
	while(Running){
		
		// SDL_PollEvent checks if there is any event 
		 while (SDL_PollEvent(&event)) {
			OnEvent(event);
		}

		OnLoop();
		OnRender();
	}

	OnCleanUp();
	
	return 0;
}

bool Game::OnInit(){

	int rendererFlags, windowFlags;

	IMG_Init(IMG_INIT_PNG | IMG_INIT_JPG);
	
	rendererFlags = SDL_RENDERER_ACCELERATED;
	windowFlags = 0;

	if(SDL_Init(SDL_INIT_VIDEO) < 0){
		printf("Could not initialize SDL: %s\n", SDL_GetError());
		exit(1);
	}

	window =  SDL_CreateWindow("Space Invader", SCREEN_POS_X, SCREEN_POS_Y, SCREEN_WIDTH, SCREEN_HEIGHT, windowFlags);
	
	if(!window){
		printf("Failed to open %d x %d window: %s\n", SCREEN_WIDTH, SCREEN_HEIGHT, SDL_GetError());
		exit(1);
	}

	SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "linear");
	renderer = SDL_CreateRenderer(window, -1, rendererFlags);

	if(!renderer){
		printf("Failed to create renderer: %s\n", SDL_GetError());
		exit(1);
	}
	
	return true;
}

void Game::OnEvent(SDL_Event event){
	switch(event.type){
		
		case SDL_QUIT:
			exit(0);
			break;

		default:
			break;
	}
}

void Game::OnLoop(){
}

void Game::OnRender(){
	SDL_SetRenderDrawColor(renderer, 96, 128, 255, 255);
	SDL_RenderClear(renderer);
	blit(player.texture, player.x, player.y);
	SDL_RenderPresent(renderer);
	SDL_Delay(16);
}

void Game::OnCleanUp(){
	SDL_DestroyTexture(player.texture);
	SDL_DestroyRenderer(renderer);
	SDL_DestroyWindow(window);
	SDL_Quit();
}

SDL_Texture * Game::loadTexture(char *filename){
	SDL_Texture * texture;

	SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading %s", filename);

	texture = IMG_LoadTexture(renderer, filename);

	return texture;
}

void Game::blit(SDL_Texture *texture, int x, int y){

	//SDL_QueryTexture(texture, NULL, NULL, &dest.w, &dest.h);
	//SDL_RenderCopy(renderer, texture, NULL, &dest);
	SDL_RenderCopy(renderer, texture, NULL, NULL);
	SDL_RenderPresent(renderer);
}