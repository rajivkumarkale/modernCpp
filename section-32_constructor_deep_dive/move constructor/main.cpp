#include <iostream>

#include "Point.hpp"

int main() {
    Point p3(std::move(Point(1.3, 4.5)));
    p3.print_info();

    // Point p1;    // wont' be allowed as the constructor is deleted.

    return 0;
}