#include "Figure.h"
#include "Point.h"

class Rectangle : public Figure {
private:
    Point topLeft;
    double width, height;
public:
    Rectangle();
    Rectangle(const Point& topLeft, double width, double height);

    double getPerimeter() const override;
    double getArea() const override;
    double getDistanceFromOrigin() const override;
    std::string getInfo() const override;
};