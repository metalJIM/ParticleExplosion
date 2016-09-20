//============================================================================
// Name        : ParticleExplosion.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <SDL.h>
#include <math.h>
#include "Screen.h"

using namespace std;
using namespace myparticle;

int main() {

	//const int SCREEN_WIDTH = 800;
	//const int SCREEN_HEIGHT = 600;

	Screen screen;

	if (screen.init() == false) {
		cout << "Error initialising SDL" << endl;
	}



	while (true) {
		//Update Particles


		//Draw Particles
		int elapsed = SDL_GetTicks();
		unsigned char green = (unsigned char)((1 + cos(elapsed * 0.0001)) * 128);
		unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

		for(int y=0; y < Screen::SCREEN_HEIGHT; y++){		//Block of colour
			for(int x=0; x < Screen::SCREEN_WIDTH; x++){
				screen.setPixel(x, y, red, green, blue);
			}
		}

			//screen.setPixel(400, 300, 255, 255, 255);			//One pixel

		//Draw the screen
		screen.screenUpdate();

		//Check for messages/events

		if (screen.processEvents() == false) {
			break;
		}

	}


	screen.close();

	return 0;
}
