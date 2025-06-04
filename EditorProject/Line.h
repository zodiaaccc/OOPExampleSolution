#pragma once
#include "Figure.h"
class Line : public Figure
{
private:
	double x1, y1, x2, y2;
public:
	Line() : x1(0), y1(0), x2(0), y2(0) {}
	Line(double x1, double y1, double x2, double y2) :
		x1(x1), y1(y1), x2(x2), y2(y2) {}
	~Line() {}
	double getPerimeter() const;
	double getDistanceFrom—enter() const;
	string toString() const;
};

