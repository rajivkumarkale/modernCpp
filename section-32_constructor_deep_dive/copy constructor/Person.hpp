#pragma once
#include <iostream>
#include <string>

class Person {
   public:
    // constructors
    Person() = default;
    Person(const std::string& last_name_param,
           const std::string& first_name_param, int age_param);
    Person(const std::string& last_name_param,
           const std::string& first_name_param);
    Person(const std::string& last_name);

    // destructor
    ~Person();

    // copy constructor
    Person(const Person& source_person);

    // utility functions
    void print_info() const;

    // getters and setters
    std::string get_last_name() const;
    void set_last_name(const std::string& last_name_);

    std::string get_first_name() const;
    void set_first_name(const std::string& first_name_);

    int* get_age() const;
    void set_age(int age_);

   private:
    std::string last_name{};
    std::string first_name{};
    int* age{};
};