#include "Rectangle.h"

double Rectangle::getPerimeter() const {
	return (width + height) * 2;
}
double Rectangle::getArea() const {
	return width * height;
}
double Rectangle::getDistanceFromCenter() const {
	double centerX = x + width / 2;
	double centerY = y + height / 2;
	return sqrt(centerX * centerX + centerY * centerY);
}
string Rectangle::toString() const {}
