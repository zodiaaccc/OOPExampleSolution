#include "FiguresCollection.h"
FiguresCollection::FiguresCollection() : size(0), capacity(10) {
    figures = new Figure * [capacity];
}

FiguresCollection::~FiguresCollection() {
    for (int i = 0; i < size; ++i)
        delete figures[i];
    delete[] figures;
}

void FiguresCollection::resize() {
    capacity *= 2;
    Figure** newArray = new Figure * [capacity];
    for (int i = 0; i < size; ++i)
        newArray[i] = figures[i];
    delete[] figures;
    figures = newArray;
}

void FiguresCollection::add(Figure* figure) {
    if (size >= capacity)
        resize();
    figures[size++] = figure;
}

int FiguresCollection::getSize() const {
    return size;
}

Figure* FiguresCollection::get(int index) const {
    if (index < 0 || index >= size)
        throw std::out_of_range("Index out of range");
    return figures[index];
}

