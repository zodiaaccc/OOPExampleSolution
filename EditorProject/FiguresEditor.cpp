#include "FiguresEditor.h"

string FiguresEditor::getAllInfo(const FiguresCollection& fc) {
    string result;
    for (int i = 0; i < fc.getSize(); ++i) {
        result += fc.get(i)->getInfo() + "\n";
    }
    return result;
}

Figure* FiguresEditor::getClosestToOrigin(const FiguresCollection& fc) {
    double minDist = 1e100;
    Figure* closest = nullptr;
    for (int i = 0; i < fc.getSize(); ++i) {
        double dist = fc.get(i)->getDistanceFromOrigin();
        if (dist < minDist) {
            minDist = dist;
            closest = fc.get(i);
        }
    }
    return closest;
}

Figure* FiguresEditor::getFarthestFromOrigin(const FiguresCollection& fc) {
    double maxDist = 0;
    Figure* farthest = nullptr;
    for (int i = 0; i < fc.getSize(); ++i) {
        double dist = fc.get(i)->getDistanceFromOrigin();
        if (dist > maxDist) {
            maxDist = dist;
            farthest = fc.get(i);
        }
    }
    return farthest;
}

Figure* FiguresEditor::getFigureWithMaxArea(const FiguresCollection& fc) {
    double maxArea = 0;
    Figure* result = nullptr;
    for (int i = 0; i < fc.getSize(); ++i) {
        double area = fc.get(i)->getArea();
        if (area > maxArea) {
            maxArea = area;
            result = fc.get(i);
        }
    }
    return result;
}

Figure* FiguresEditor::getFigureWithMinArea(const FiguresCollection& fc) {
    double minArea = 1e100;
    Figure* result = nullptr;
    for (int i = 0; i < fc.getSize(); ++i) {
        double area = fc.get(i)->getArea();
        if (area < minArea) {
            minArea = area;
            result = fc.get(i);
        }
    }
    return result;
}

double FiguresEditor::getTotalArea(const FiguresCollection& fc) {
    double total = 0;
    for (int i = 0; i < fc.getSize(); ++i)
        total += fc.get(i)->getArea();
    return total;
}

double FiguresEditor::getTotalPerimeter(const FiguresCollection& fc) {
    double total = 0;
    for (int i = 0; i < fc.getSize(); ++i)
        total += fc.get(i)->getPerimeter();
    return total;
}
