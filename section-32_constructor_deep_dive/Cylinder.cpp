#include "Cylinder.hpp"

Cylinder::Cylinder(double radius_param, double height_param)
    : base_radius(radius_param), height(height_param) {}

// Getters
double Cylinder::get_base_radius() const { return base_radius; }

double Cylinder::get_height() const { return height; }

// setters
void Cylinder::set_base_radius(double radius_param) {
    base_radius = radius_param;
}

void Cylinder::set_height(double height_param) { height = height_param; }

double Cylinder::volume() const {
    double volume = PI * base_radius * base_radius * height;
    return volume;
}