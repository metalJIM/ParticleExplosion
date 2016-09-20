/*
 * Particle.cpp
 *
 *  Created on: 20 Sep 2016
 *      Author: musicadmin
 */

#include "Particle.h"
#include <stdlib.h>

namespace myparticle {

Particle::Particle() {

	m_x = ((2.0 * rand())/RAND_MAX) - 1;
	m_y = ((2.0 * rand())/RAND_MAX) - 1;

}

Particle::~Particle() {
	// TODO Auto-generated destructor stub
}

} /* namespace myparticle */
