#include "Rectangle.h"

Rectangle::Rectangle() : topLeft(Point()), width(0), height(0) {}
Rectangle::Rectangle(const Point& p, double w, double h)
    : topLeft(p), width(w < 0 ? 0 : w), height(h < 0 ? 0 : h) {
}

double Rectangle::getPerimeter() const {
    return 2 * (width + height);
}
double Rectangle::getArea() const {
    return width * height;
}
double Rectangle::getDistanceFromOrigin() const {
    Point other(topLeft.getX() + width, topLeft.getY() + height);
    double d1 = topLeft.getDistanceFromOrigin();
    double d2 = other.getDistanceFromOrigin();
    return std::min(d1, d2);
}
string Rectangle::getInfo() const {
    return "Rectangle at " + topLeft.getInfo() + ", width = " + std::to_string(width) + ", height = " + std::to_string(height);
}