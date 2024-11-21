#include <iostream>
#include "Cylinder.hpp"

Cylinder::Cylinder(double base_radius, double height)
    : base_radius(base_radius), height(height), count(new int{5})
{

    std::cout << "This pointer points to the address of object: " << this << std::endl;
}

double Cylinder::volume()
{
    return PI * base_radius * base_radius * height;
}

Cylinder::~Cylinder()
{
    delete count;
    count = nullptr;
}

double Cylinder::get_height() const { return height; }

Cylinder &Cylinder::set_height(double height_)
{
    height = height_;
    return *this;
}

double Cylinder::get_base_radius() const { return base_radius; }

Cylinder &Cylinder::set_base_radius(double base_radius_)
{
    base_radius = base_radius_;
    return *this;
}

/*
We can also pass the pointers to self
    Cylinder* Cylinder::set_base_radius(double base_radius_)
    {
        base_radius = base_radius_;
        return this;
    }

so it can be chained using ->
*/