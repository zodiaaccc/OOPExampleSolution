#include "Circle.h"

double Circle::getPerimeter() const {
	return 2 * pi * radius;
}
double Circle::getArea() const {
	return pi * sqrt(radius);
}
double getDistanceFromCenter() const {
  return sqrt(centerX)
}

