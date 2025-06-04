#pragma once
#include "Figure.h"

class Point : public Figure
{
private:
	double x, y;
public:
	Point() : x(0), y(0) {}
	Point(double x, double y) : x(x), y(y) {}
	Point(const Point& other) : x(other.x), y(other.y) {}
	~Point() {}

	 double getDistanceFrom—enter() const;
	 
	
};

