#pragma once
#include "Figure.h"
#include "Point.h"

class Line : public Figure {
private:
    Point start, end;
public:
    Line();
    Line(const Point& s, const Point& e);

    double getPerimeter() const override;
    double getArea() const override;
    double getDistanceFromOrigin() const override;
    string getInfo() const override;
};