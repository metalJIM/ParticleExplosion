/*
 * Swarm.cpp
 *
 *  Created on: 20 Sep 2016
 *      Author: musicadmin
 */

#include "Swarm.h"

namespace myparticle {

Swarm::Swarm(): lastTime(0) {

	m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
	delete [] m_pParticles;
}

void Swarm::update(int elapsed){         //iterating through each particle and updating individually

	int interval = elapsed - lastTime;	//How much time has elapsed since last got the value


	for(int i=0; i < Swarm::NPARTICLES; i++){
		m_pParticles[i].update(interval);
	}

	lastTime = elapsed;

}

} /* namespace myparticle */
