/*
 * Screen.h
 *
 *  Created on: 19 Sep 2016
 *      Author: musicadmin
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <SDL.h>

namespace myparticle {

class Screen {

public:
	const static int SCREEN_WIDTH = 800;
	const static int SCREEN_HEIGHT = 600;

private:
	SDL_Window *m_window;			//m_ : to identify as a member variable as it is public and can be accessed outside the class
	SDL_Renderer *m_renderer;
	SDL_Texture *m_texture;
	Uint32 *m_buffer1;
	Uint32 *m_buffer2;

public:
	Screen();

	bool init();
	void screenUpdate();
	void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
	bool processEvents();
	void close();
	//void clear();
	void boxBlur();

	virtual ~Screen();
};

} /* namespace myparticle */

#endif /* SCREEN_H_ */
