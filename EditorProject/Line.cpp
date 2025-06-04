#include "Line.h"


double Line::getPerimeter() const {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}
double Line::getDistanceFrom—enter() const {
	double midX = (x1 + x2) / 2;
	double midY = (y1 + y2) / 2;
	return sqrt(midX * midX + midY * midY);
}
string Line::toString() const {
	string msg = "";
	msg = "first point:" + to_string(x1) +
		", " + to_string(y1) + "\n second point:" +
		to_string(x2) + ", " + to_string(y2);
	return msg;
}