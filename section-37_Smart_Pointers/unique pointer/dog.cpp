#include "Dog.hpp"

#include <iostream>

Dog::Dog(std::string name_param) : dog_name(name_param) {
    std::cout << "Constructor for dog " << dog_name << " called." << std::endl;
}

Dog::~Dog() {
    std::cout << "Destructor for dog " << dog_name << " called." << std::endl;
}

std::string Dog::get_name() const { return dog_name; }
void Dog::set_dog_name(const std::string& name) { dog_name = name; }

void Dog::print_dog() const {
    std::cout << "Printing Dog : " << dog_name << std::endl;
}