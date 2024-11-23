#include "Dog.hpp"
#include <string>
#include <iostream>

Dog::Dog()
{
    dog_name = "tommy";
    dog_breed = "husky";
    dog_age = new int{3};
}

Dog::Dog(const std::string &name_param, const std::string &breed_param, int age_param)
    : dog_name(name_param), dog_breed(breed_param), dog_age(new int(age_param)), dog_cost(50) {}

Dog::~Dog()
{
    delete dog_age;
}

// setters wont' be required anymore.
// void Dog::set_dog_name(const std::string &dog_name_) { dog_name = dog_name_; }
// void Dog::set_dog_breed(const std::string &dog_breed_) { dog_breed = dog_breed_; }
// void Dog::set_dog_age(int dog_age_) { *dog_age = dog_age_; }
// void Dog::set_dog_cost(int dog_cost_) { dog_cost = dog_cost_; }

const std::string Dog::get_dog_name() const
{
    return dog_name;
}

const std::string Dog::get_dog_breed() const
{
    return dog_breed;
}

const int Dog::get_dog_age() const
{
    return *dog_age;
}

const int Dog::get_dog_cost() const
{
    return dog_cost;
}

std::string &Dog::get_dog_name()
{
    return dog_name;
}
std::string &Dog::get_dog_breed()
{
    return dog_breed;
}
int &Dog::get_dog_age()
{
    return *dog_age;
}
int &Dog::get_dog_cost()
{
    return dog_cost;
}

void Dog::print_info() const
{
    std::cout << "Name: " << dog_name << "\nBreed: " << dog_breed << "\nAge: " << *dog_age << "\nCost: " << dog_cost << "\n\n";
    *dog_age = 600; // this is allowed
}