#include <iostream>
#include "Cylinder.hpp"

int main()
{
    std::cout << "Cylinder class" << std::endl;
    Cylinder cylinder1;
    std::cout << cylinder1.volume() << std::endl;

    Cylinder cylinder2(3, 5);
    std::cout << cylinder2.volume() << std::endl;

    // Creating objects in heap
    Cylinder *p_cylinder = new Cylinder(3, 2);
    std::cout << p_cylinder->volume() << std::endl;

    p_cylinder->set_height(1).set_base_radius(1);
    std::cout << p_cylinder->volume() << std::endl;

    // freeing memory
    delete p_cylinder;

    return 0;
}