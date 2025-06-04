#pragma once
#include "Figure.h"
class Rectangle : public Figure 
{
private:
	double x, y;
	double width, height;
public:
	Rectangle() : x(0), y(0), width(0), height(0) {}
	Rectangle(double x, double y, double width, double height):
		x(x),y(y),width(width),height(height) {}
	~Rectangle() {}

	double getPerimeter() const;
	double getArea() const;
	double getDistanceFromCenter() const;
	string toString() const;
};

