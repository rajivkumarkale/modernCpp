#include <iostream>
#include <string>
#include "Dog.hpp"

struct Point
{
    double x;
    double y;
};

// Pass by value:
void print_dog_object(const Dog &dog_ref)
{
    std::cout << dog_ref.get_dog_cost() << std::endl;
}

int main()
{
    Dog dog;
    dog.print_info();

    const Dog dog1;
    const Dog dog2("bur", "husky", 2);

    dog1.print_info(); // Error: without const in function5
    dog2.print_info(); // Error: without const in function

    // Dog *p_dog = &dog1;  // Error:   invalid conversion from const Dog* to Dog*
    // Dog &dog_ref = dog1; // Error: Can't convert from const Dog& to Dog&

    const Dog *p_const_dog = &dog1;
    // p_const_dog->set_dog_name("hillo"); // Error: expected as this method will update dog_name on const object
    p_const_dog->print_info(); // Error : not expected, so will have to add 'const' in function

    const Dog &const_dog_ref = dog1;
    std::cout << "inside main : " << const_dog_ref.get_dog_name() << std::endl;

    print_dog_object(dog1);

    // using getters that also work as setters.
    Dog dog3("himmat", "meow", 34);
    dog3.get_dog_age() = 75;
    dog3.get_dog_name() = "dillo"; // This getter works as setter.
    std::cout << dog3.get_dog_name() << " " << dog3.get_dog_age() << std::endl;

    std::cout << "---------" << std::endl;
    Point point1{4.4, 2.3};
    auto [a, b] = point1;
    std::cout << a << "  " << b << std::endl;

    return 0;
}
