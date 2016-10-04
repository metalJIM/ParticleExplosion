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
private:
	double m_speed;
	double m_direction;
private:
	void init();
public:
	Particle();


	virtual ~Particle();

	void update(int interval);
};

} /* namespace myparticle */

#endif /* PARTICLE_H_ */
