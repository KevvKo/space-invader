#include <iostream>
#include "game.h"
#include <SDL2/SDL.h>

using namespace::std;

void Game::App() {
	Running = true;
}

int Game::OnExecute(){
	if(OnInit() == false){
		return -1;
	}

    SDL_Event Event;

	while(Running){
		// SDL_PollEvent checks if there is any event 
		while(SDL_PollEvent(&Event)) {
			OnEvent(&Event);
		}
		OnLoop();
		OnRender();
	}

	OnCleanUp();
	return 0;
}

bool Game::OnInit(){
	return true;
}

void Game::OnEvent(SDL_Event* Event){

}

void Game::OnLoop(){
	
}

void Game::OnRender(){
	
}

void Game::OnCleanUp(){
	
}