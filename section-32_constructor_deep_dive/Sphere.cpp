#include "Sphere.hpp"

#include <iostream>

Sphere::Sphere(double radius_param) : Sphere(radius_param, "RED", 4) {
    std::cout << "One param constructor body called" << std::endl;
    position = 5.0;
}

Sphere::Sphere(double radius_param, std::string color_param, int shading_param)
    : radius(radius_param), color(color_param), shading(shading_param) {
    std::cout << "Three param constructor body called" << std::endl;
}

Sphere::~Sphere() {}

double Sphere::volume() const {
    return (4 / 3.0) * PI * radius * radius * radius;
}