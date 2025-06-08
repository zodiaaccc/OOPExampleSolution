#pragma once
#include "Figure.h"

class FiguresCollection {
private:
    Figure** figures;
    int size;
    int capacity;
    void resize();
public:
    FiguresCollection();
    ~FiguresCollection();
    void add(Figure* figure);
    int getSize() const;
    Figure* get(int index) const;
};