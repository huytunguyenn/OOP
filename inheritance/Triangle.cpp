/*
 * Triangle.cpp
 *
 *  Created on: Oct 3, 2018
 *      Author: SONY
 */

#include "Triangle.h"

Triangle::Triangle() {
	// TODO Auto-generated constructor stub

}

Triangle::Triangle(float w, float h) : HeightFigure(w, h){
	// TODO Auto-generated constructor stub

}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

float Triangle::Area()
{
	return mWidth * mHeight/2;
}
