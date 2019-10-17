/*
 * Square.h
 *
 *  Created on: Oct 3, 2018
 *      Author: SONY
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include "rectangle.h"

class Square : public Rectangle {
public:
	Square();
	Square(float);
	virtual ~Square();
};

#endif /* SQUARE_H_ */
