/*
 * Swarm.h
 *
 *  Created on: 20 Sep 2016
 *      Author: musicadmin
 */

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

namespace myparticle {

class Swarm {
public:

	const static int NPARTICLES = 5000;

private:

	Particle * m_pParticles;

public:
	Swarm();
	virtual ~Swarm();

	const Particle * const getParticles() {return m_pParticles;}
};

} /* namespace myparticle */

#endif /* SWARM_H_ */
