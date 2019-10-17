/*
 * Triangle.h
 *
 *  Created on: Oct 3, 2018
 *      Author: SONY
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "heightfigure.h"

class Triangle : public HeightFigure{
public:
	Triangle();
	Triangle(float, float);
	virtual ~Triangle();
	virtual float Area();
};

#endif /* TRIANGLE_H_ */
