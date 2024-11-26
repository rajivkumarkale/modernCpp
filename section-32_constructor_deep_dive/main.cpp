#include <iostream>

#include "Cylinder.hpp"
#include "Sphere.hpp"
#include "Square.hpp"

bool compare(const Square& square1, const Square& square2) {
    return (square1.surface() > square2.surface());
}

int main() {
    Cylinder cylinder{5};
    std::cout << cylinder.get_base_radius() << std::endl;
    std::cout << cylinder.get_height() << std::endl;

    Square square1(30.0);
    Square square2(20.0);

    std::cout << "-------" << std::endl;
    std::cout << "square1 > square2: " << compare(square1, square2)
              << std::endl;

    std::cout << "Implicity conversions" << std::endl;

    // 44.5 Implicityly converted to Square(44.5)
    // std::cout << "square1 > 44.5: " << compare(square1, 44.5) << std::endl;
    // // Will give error once we make constructore explicit

    std::cout << "----------------" << std::endl;

    Sphere sphere1(3.0);

    return 0;
}