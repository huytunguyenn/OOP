//============================================================================
// Name        : p1.cpp
// Author      : abc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "rectangle.h"
#include "square.h"
#include "triangle.h"
#include <iostream>
using namespace std;

int main() {
	HeightFigure* p = new Square(5);
	cout<<p->Area();

	delete p;
	return 0;
}
