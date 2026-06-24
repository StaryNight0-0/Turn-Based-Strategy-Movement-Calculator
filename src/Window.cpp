#include <iostream>
#include <SDL2/SDL.h>
#include "Window.h"



window::window(){

	window = nullptr;
	setFullscreen = false;
	window = SDL_CreateWindow(){"Turn based Calculator", 600, 480, SDL_WINDOW_RESIZABLE}

}




void window::set_windowSize(int width, int height){
SDL_SetWindowSize(window, width, height);
	if(!SDL_SetWindowSize()){
		std::cout << "Cannot set window size" << std::endl;
	}
}

void window:;set_fullscreen(bool state){
if (!SetWindowFullscreen(window,  state)){
		std::cout << "Could not set window to full screen" << std::endl;
	}
	setFullscreen = state;

}



// need to setout get and set functions for window. Also need to allocate these to the class constructor and destructor.
// ALSO CHECK IF THIS COMPILES LOL
