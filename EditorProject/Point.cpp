#include "Point.h"

Point::Point() : x(0), y(0) {}
Point::Point(double x, double y) : x(x), y(y) {}

double Point::getX() const { return x; }
double Point::getY() const { return y; }
void Point::setX(double xVal) { x = xVal; }
void Point::setY(double yVal) { y = yVal; }

double Point::getPerimeter() const { return 0.0; }
double Point::getArea() const { return 0.0; }
double Point::getDistanceFromOrigin() const {
    return sqrt(x * x + y * y);
}
string Point::getInfo() const {
    return "Point(" + std::to_string(x) + ", " + std::to_string(y) + ")";
}