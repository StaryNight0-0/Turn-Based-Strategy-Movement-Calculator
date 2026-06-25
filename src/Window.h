#include <iostream>
#include <string>
#include <SDL2/SDL.h>


class window{

public:	
window();
~window();

void set_title(const std::string &title);
void set_windowSize(int width, int height);
void set_fullscreen(bool state);


	
private:
SDL_Window* _window;
bool setFullscreen;




};
