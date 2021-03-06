#ifndef SHAPE_H
#define SHAPE_H
#include "math.h"
#include <fstream>
#include <windows.h>
#include <iostream>

using namespace std;
class Shape
{
	public:
	int algorithm;
	int x_s;
	int y_s;
	int x2;
	int y2;
	
	Shape ( int algorithm, int x1, int y1, int x2, int y2)
	{
		this->x_s = x1;
		this->y_s = y1;
		this->x2 = x2;
		this->y2 = y2;
		this->algorithm = algorithm;
	}
	
	virtual void save(fstream &outFile)
	{
		outFile <<"0";
	}	
};

#endif
