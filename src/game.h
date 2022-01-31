#include <SDL2/SDL.h>
#include "structures.h"

class Game { 

	private:
		SDL_Window * window;
		SDL_Renderer * renderer;
		Entity player;
		bool Running;

	private:
		SDL_Texture * loadTexture(char *filename);
		void blit(SDL_Texture *texture, int x, int y);
	public:
		void App();
		int OnExecute();

	public:
		bool OnInit();
		void OnEvent(SDL_Event Event);
		void OnLoop();
		void OnRender();
		void OnCleanUp();
};
