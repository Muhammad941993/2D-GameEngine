#pragma once
#include <SDL.h>
#include <iostream>
#include <SDL_image.h>

class Game
{
public:

	Game();
	~Game();

	void Initialize(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

	void HandleEvents();
	void Update();
	void Render();	
	void Clean();
	bool Running() { return isRunning; }

	static SDL_Renderer* renderer;


private:

	int cnt = 0;
	bool isRunning;
	SDL_Window* window;

};

