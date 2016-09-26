/*
 * Particle.cpp
 *
 *  Created on: 20 Sep 2016
 *      Author: musicadmin
 */

#include "Particle.h"
#include <math.h>
#include <stdlib.h>

namespace myparticle {

Particle::Particle() :m_x(0), m_y(0) {         //Initializes to the center of the screen

	/*
	m_x = ((2.0 * rand())/RAND_MAX) - 1;       //Initializing co-ordinates of each particles x and y positions to a random value between -1 and +1
	m_y = ((2.0 * rand())/RAND_MAX) - 1;
	*/

	m_direction = (2 * M_PI * rand())/RAND_MAX; //Choosing angle
	m_speed = (0.0001 * rand())/RAND_MAX;		//Choosing speed

}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

void Particle::update(int interval){    //Where the particles are being moved

	double xspeed =  m_speed * cos(m_direction);
	double yspeed =  m_speed * sin(m_direction);

	m_x += xspeed * interval;		//The amount we move each particle by when we run the update method is proportional to the amount of time thats passed since we last moved the particle
	m_y += yspeed * interval;		//Therefore ensuring similar speed on slower and faster systems --- jerky on slower systems but consistant
}

} /* namespace myparticle */
