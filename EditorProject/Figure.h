#include <iostream>
#include <string>
using namespace std;
class Figure {
public:
    Figure() = default;
    virtual ~Figure() = default;

    virtual double getPerimeter() const = 0;
    virtual double getArea() const = 0;
    virtual double getDistanceFromOrigin() const = 0;
    virtual string getInfo() const = 0;
};