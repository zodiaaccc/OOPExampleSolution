#include "Line.h"


Line::Line() : start(Point()), end(Point()) {}
Line::Line(const Point& s, const Point& e) : start(s), end(e) {}

double Line::getPerimeter() const {
    double dx = end.getX() - start.getX();
    double dy = end.getY() - start.getY();
    return std::sqrt(dx * dx + dy * dy);
}
double Line::getArea() const { return 0.0; }
double Line::getDistanceFromOrigin() const {
    double d1 = start.getDistanceFromOrigin();
    double d2 = end.getDistanceFromOrigin();
    return std::min(d1, d2);
}
string Line::getInfo() const {
    return "Line from " + start.getInfo() + " to " + end.getInfo();
}