/*
 * HeightFigure.h
 *
 *  Created on: Oct 3, 2018
 *      Author: SONY
 */

#ifndef HEIGHTFIGURE_H_
#define HEIGHTFIGURE_H_

class HeightFigure {
protected:
	float mWidth;
	float mHeight;
public:
	HeightFigure();
	HeightFigure(float, float);
	virtual ~HeightFigure();

	virtual float Area() = 0;
};

#endif /* HEIGHTFIGURE_H_ */
