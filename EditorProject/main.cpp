#include "FiguresCollection.h"
#include "FiguresEditor.h"
#include "Point.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    std::srand(std::time(0));

    FiguresCollection collection;
    collection.add(new Point(1, 2));
    collection.add(new Line(Point(0, 0), Point(3, 4)));
    collection.add(new Circle(Point(5, 5), 3));
    collection.add(new Rectangle(Point(2, 3), 4, 6));

    std::cout << "All figures:\n" << FiguresEditor::getAllInfo(collection);

    std::cout << "\nClosest to origin: " << FiguresEditor::getClosestToOrigin(collection)->getInfo();
    std::cout << "\nFarthest from origin: " << FiguresEditor::getFarthestFromOrigin(collection)->getInfo();
    std::cout << "\nFigure with max area: " << FiguresEditor::getFigureWithMaxArea(collection)->getInfo();
    std::cout << "\nFigure with min area: " << FiguresEditor::getFigureWithMinArea(collection)->getInfo();

    std::cout << "\nTotal area: " << FiguresEditor::getTotalArea(collection);
    std::cout << "\nTotal perimeter: " << FiguresEditor::getTotalPerimeter(collection);

    return 0;
}
