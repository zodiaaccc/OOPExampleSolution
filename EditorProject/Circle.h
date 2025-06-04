#pragma once
#include "Figure.h"
class Circle : public Figure
{
private:
	const double pi = 3.14;
	double centerX, centerY, radius;
public:
	Circle() : centerX(0), centerY(0), radius(0) {}
	Circle(double centerX, double centerY, double radius)
		: centerX(centerX), centerY(centerY), radius(radius) {}

	double getPerimeter() const;
	double getArea() const;
	double getDistanceFromCenter() const;
	string toString() const;
};

