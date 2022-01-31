#include <SDL2/SDL.h>

class Game { 

	private:
		SDL_Window * window;
		SDL_Renderer * renderer;
		bool Running;

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
