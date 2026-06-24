#include <iostream>
#include <string>


class window{

public:	

void set_title(const std::string &title)
void set_windowSize(int width, int height);
void set_fullscreen(bool state);


	
private:
SDL_Window* window;
bool setFullscreen;




};
