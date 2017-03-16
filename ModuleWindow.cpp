#include "Globals.h"
#include "Application.h"
#include "ModuleWindow.h"

#include "SDL/include/SDL.h"

// TODO 2: Init the library and check for possible error
// using SDL_GetError()

// TODO 3: pick the width and height and experiment with flags: borderless / fullscreen / resizable,
// then create the window and check for errors

// TODO 4: Finally create a screen surface and keep it as a public variable

// TODO 5: Fill with code CleanUp() method :)
bool ModuleWindow::Init()
{
	bool ret = true;
	SDL_Window* window = nullptr;
	SDL_Surface* surface = nullptr;
	if(SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		LOG("Unable to initialize the library, error %s \n", SDL_GetError());
		ret = false;
	}
	return ret;
	
	if ((window = SDL_CreateWindow("SDL2Handout", SDL_WINDOW_RESIZABLE, SDL_WINDOW_RESIZABLE, 448, 640, FULLSCREEN)) != 0)
	{
		LOG("Unable to initialize the library, error %s \n", SDL_GetError());
		ret = false;
	}
	


}
