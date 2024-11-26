#include "Square.hpp"

#include <iostream>

Square::Square(double side_param) : side(side_param) {
    std::cout << "constructore called for : " << side_param << std::endl;
}

Square::~Square() {}

double Square::surface() const { return side * side; }