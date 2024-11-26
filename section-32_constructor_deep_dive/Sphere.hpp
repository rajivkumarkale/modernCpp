#pragma once
#include <string>

class Sphere {
   public:
    Sphere(double radius_param);
    Sphere(double side_param, std::string color_param, int shading_param);

    ~Sphere();
    double volume() const;

   private:
    double radius;
    std::string color;
    int shading;
    double position;
    const double PI = 3.14;
};