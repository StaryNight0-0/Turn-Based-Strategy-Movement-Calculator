#include <iostream>
#include <SDL2/SDL.h>
#include "Window.h"
#include <string>



window::window(){

	_window = nullptr;
	setFullscreen = false;
	_window = SDL_CreateWindow("Turn based Calculator",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED, 600, 480, SDL_WINDOW_RESIZABLE);

}


void window::set_title( const std::string &title){

	SDL_SetWindowTitle(_window,title.c_str());
	if(title.c_str() == NULL){
		std::cout << "Could not change title of window" << std::endl;
		SDL_GetError();
	}
}


void window::set_windowSize(int width, int height){
	SDL_SetWindowSize(_window, width,height);
	
	
}

void window::set_fullscreen(bool state){
if (!SDL_SetWindowFullscreen(_window,  state)){
		std::cout << "Could not set window to full screen" << std::endl;
	}
	setFullscreen = state;

}


window::~window(){
	SDL_DestroyWindow(_window);
}



// need to setout get and set functions for window. Also need to allocate these to the class constructor and destructor.
// ALSO CHECK IF THIS COMPILES LOL
