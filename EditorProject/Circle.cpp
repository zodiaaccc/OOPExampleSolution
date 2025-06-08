#include "Circle.h"

Circle::Circle() : center(Point()), radius(0.0) {}
Circle::Circle(const Point& c, double r) : center(c), radius(r < 0 ? 0 : r) {}

double Circle::getPerimeter() const { return 2 * pi * radius; }
double Circle::getArea() const { return pi * radius * radius; }
double Circle::getDistanceFromOrigin() const {
    return std::max(0.0, center.getDistanceFromOrigin() - radius);
}
string Circle::getInfo() const {
    return "Circle with center " + center.getInfo() + ", radius = " + std::to_string(radius);
}