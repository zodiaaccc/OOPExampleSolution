#pragma once
#include "FiguresCollection.h"
#include <string>

class FiguresEditor {
public:
    static std::string getAllInfo(const FiguresCollection&);
    static Figure* getClosestToOrigin(const FiguresCollection&);
    static Figure* getFarthestFromOrigin(const FiguresCollection&);
    static Figure* getFigureWithMaxArea(const FiguresCollection&);
    static Figure* getFigureWithMinArea(const FiguresCollection&);
    static double getTotalArea(const FiguresCollection&);
    static double getTotalPerimeter(const FiguresCollection&);
};