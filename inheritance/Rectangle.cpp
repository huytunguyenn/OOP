/*
 * Rectangle.cpp
 *
 *  Created on: Oct 3, 2018
 *      Author: SONY
 */

#include "Rectangle.h"

Rectangle::Rectangle() {
	// TODO Auto-generated constructor stub

}

Rectangle::Rectangle(float w, float h) : HeightFigure(w, h) {
	// TODO Auto-generated constructor stub

}

Rectangle::~Rectangle() {
	// TODO Auto-generated destructor stub
}

float Rectangle::Area()
{
	return mWidth * mHeight;
}
