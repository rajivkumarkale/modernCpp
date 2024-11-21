#pragma once

class Cylinder
{
private:
    double base_radius{1.0};
    double height{1.0};
    double const PI{3.14};
    int *count{nullptr};

public:
    Cylinder() = default;
    Cylinder(double base_radius, double height);

    ~Cylinder();

    double volume();

    double get_height() const;
    Cylinder &set_height(double height_);

    double get_base_radius() const;
    Cylinder &set_base_radius(double base_radius_);
};