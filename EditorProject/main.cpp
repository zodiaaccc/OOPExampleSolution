#include "figure.h"
#include  "Line.h"
#include "Point.h"
#include "Rectangle.h"

int main() {
	const int numFigures = 5;

	Figure** figures = new Figure* [numFigures];
	figures[0] = new Point(1, 2);
}