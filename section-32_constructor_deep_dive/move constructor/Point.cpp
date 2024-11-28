#include "Point.hpp"

#include <iostream>

Point::Point(double x_param, double y_param)
    : x(new double{x_param}), y(new double{y_param}) {
    std::cout << "constructor called : " << this << ": " << x << ", " << y
              << std::endl;
}

Point::Point(const Point& source_point)
    : Point(*source_point.x, *source_point.y) {
    std::cout << "copy constructor called : " << this << ": " << x << ", " << y
              << std::endl;
}

Point::Point(Point&& source_point)
    : x(source_point.get_x()), y(source_point.get_y()) {
    source_point.invalidate();

    std::cout << "move constructor called : " << this << ": " << x << "," << y
              << std::endl;
}

double* Point::get_x() const { return x; }
double* Point::get_y() const { return y; }

void Point::set_x(double x_) { *x = x_; }
void Point::set_y(double y_) { *y = y_; }

void Point::invalidate() {
    x = nullptr;
    y = nullptr;
}

void Point::print_info() const {
    std::cout << this << " [ " << *x << ", " << *y << " ] " << std::endl;
}

Point::~Point() {
    delete x;
    delete y;
    std::cout << "destructor called : " << this << std::endl;
}