#include "Person.hpp"

#include <iostream>

Person::Person(const std::string& last_name_param,
               const std::string& first_name_param, int age_param)
    : last_name{last_name_param},
      first_name{first_name_param},
      age{new int{age_param}} {}

Person::Person(const std::string& last_name_param,
               const std::string& first_name_param)
    : Person{last_name_param, first_name_param, 0} {}

Person::Person(const std::string& last_name) : Person{last_name, ""} {}

Person::~Person() { delete age; }

/* 1. Invalid copy consturctor : Taking object by value isn't allowed as it
leads to recursive calls. so, it is a compilation error.

Person::Person(const Person source_person)
    : last_name{source_person.last_name}, first_name{source_person.first_name},
age{source_person.age} {}
*/

/* 2. Behaviour of Default copy constructor : shallow copy, address of pointers
get's copied instead of value. Person::Person(const Person &source_person) :
last_name{source_person.get_last_name()},
      first_name{source_person.get_first_name()},
      age{source_person.get_age()} {}
*/

/*
    3. Valid copy constructor
    But not the best way, as we can use the constructor delegation.
Person::Person(const Person &source_person)
    : last_name{source_person.get_last_name()},
      first_name{source_person.get_first_name()},
      age{new int{*source_person.get_age()}} {}
*/

/*
// 4. copy constructor using constructor delegation.
Person::Person(const Person& source_person)
    : Person(source_person.get_last_name(), source_person.get_first_name(),
             *source_person.get_age()) {}
*/

// 5. another way to write the copy constructor and both 4th and 5th can be
// used.
Person::Person(const Person& source_person)
    : Person{source_person.first_name, source_person.last_name,
             *source_person.age} {
    std::cout << "copy constructor called" << std::endl;
}

void Person::print_info() const {
    std::cout << "Person object at : " << this << " [Last Name: " << last_name
              << ", First Name: " << first_name << ", Age: " << *age
              << ", Age address: " << age << " ] " << std::endl;
}

std::string Person::get_last_name() const { return last_name; }

void Person::set_last_name(const std::string& last_name_) {
    last_name = last_name_;
}

std::string Person::get_first_name() const { return first_name; }

void Person::set_first_name(const std::string& first_name_) {
    first_name = first_name_;
}

int* Person::get_age() const { return age; }

void Person::set_age(int age_) { *age = age_; }
