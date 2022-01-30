#include <iostream>
#include "game.h"
#include "definitions.h"
#include <SDL2/SDL.h>

using namespace::std;

void Game::App() {
	Running = true;
}

int Game::OnExecute(){
	if(OnInit() == false){
		return -1;
	}

    SDL_Event event;

	while(Running){
		
		prepareScene();
		// SDL_PollEvent checks if there is any event 
		 while (SDL_PollEvent(&event)) {
			OnEvent(event);
		}

		presentScene();

		OnLoop();
		OnRender();
	}

	OnCleanUp();
	return 0;
}

bool Game::OnInit(){

	int rendererFlags, windowFlags;

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
	
}

void Game::OnCleanUp(){
	SDL_Quit();
}

void Game::prepareScene(){
	SDL_SetRenderDrawColor(renderer, 96, 128, 255, 255);
	SDL_RenderClear(renderer);
}

void Game::presentScene(){
	SDL_RenderPresent(renderer);
}