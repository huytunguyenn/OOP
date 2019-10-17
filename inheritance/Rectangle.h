/*
 * Rectangle.h
 *
 *  Created on: Oct 3, 2018
 *      Author: SONY
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include "heightfigure.h"

class Rectangle : public HeightFigure{
public:
	Rectangle();
	Rectangle(float, float);
	virtual ~Rectangle();
	virtual float Area();
};

#endif /* RECTANGLE_H_ */
