#include <iostream>
#include <string>
using namespace std;
class Figure
{
public:

	Figure() {}


	virtual ~Figure() {};

	virtual double getPerimeter() const = 0;
	virtual double getArea() const = 0;
	virtual double getDistanceFrom—enter() const = 0;

	virtual string toString() const = 0;
	
};

