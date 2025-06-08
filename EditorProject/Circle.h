#pragma once
#include "Figure.h"
#include "Point.h"
class Circle : public Figure {
private:
    Point center;
    double radius;
    int pi = 3.14;
public:
    Circle();
    Circle(const Point& c, double r);

    double getPerimeter() const override;
    double getArea() const override;
    double getDistanceFromOrigin() const override;
    std::string getInfo() const override;
};

