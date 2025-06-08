#pragma once
#include "Figure.h"

class Point : public Figure {
private:
    double x, y;
public:
    Point();
    Point(double x, double y);

    double getX() const;
    double getY() const;
    void setX(double x);
    void setY(double y);

    double getPerimeter() const override;
    double getArea() const override;
    double getDistanceFromOrigin() const override;
    std::string getInfo() const override;
};

