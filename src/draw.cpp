#include "game.h";

void prepareScene(void)
{
	SDL_SetRenderDrawColor(Game.renderer, 96, 128, 255, 255);
	SDL_RenderClear(Game.renderer);
}

void presentScene(void)
{
	SDL_RenderPresent(Game.renderer);
}