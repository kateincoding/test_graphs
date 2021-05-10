#include <SDL2/SDL.h>
int main(void)
{
	SDL_Window *window;
	SDL_Renderer *renderer;

	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		fprintf(stderr, "Unable to initialize SDL:   %s\n", SDL_GetError());
		return (1);
	}

	window = SDL_CreateWindow("SDL2 \\0/", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1260, 720, 0);
	if (window == NULL)
	{
		fprintf(stderr, "CREAT FAIL   %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
	if (renderer == NULL)
	{
		fprintf(stderr, "RENDERER FAILS:  %s\n", SDL_GetError());
		SDL_Quit();
		return (1);
	}
	return (0);
}
