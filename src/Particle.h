/*
 * Particle.h
 *
 *  Created on: 20 Sep 2016
 *      Author: musicadmin
 */

#ifndef PARTICLE_H_
#define PARTICLE_H_

namespace myparticle {

struct Particle {


	double m_x;
	double m_y;
	double m_xspeed;
	double m_yspeed;

public:
	Particle();

	virtual ~Particle();

	void update();
};

} /* namespace myparticle */

#endif /* PARTICLE_H_ */
