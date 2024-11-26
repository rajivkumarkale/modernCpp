#pragma once

class Cylinder {
   public:
    Cylinder() = default;
    Cylinder(double radius_param, double height_param = 10);

    // Getters
    double get_base_radius() const;
    double get_height() const;

    // setters
    void set_base_radius(double radius_param);
    void set_height(double height_param);

    double volume() const;

   private:
    double base_radius{1};
    double height{2};
    double PI = 3.14;
};