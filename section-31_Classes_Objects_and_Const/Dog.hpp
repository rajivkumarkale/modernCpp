#pragma once
#include <string>

class Dog
{
public:
    Dog();
    Dog(const std::string &name_param, const std::string &breed_param, int age_param);

    ~Dog();

    // setters wont' be required anymore.
    // void set_dog_age(int dog_age_);
    // void set_dog_name(const std::string &dog_name_);
    // void set_dog_breed(const std::string &dog_breed_);
    // void set_dog_cost(int dog_cost_);

    const std::string get_dog_name() const;
    const std::string get_dog_breed() const;
    const int get_dog_age() const;
    const int get_dog_cost() const;

    // Getters that work as setters also
    std::string &get_dog_name();
    std::string &get_dog_breed();
    int &get_dog_age();
    int &get_dog_cost();

    void print_info() const;

private:
    std::string dog_name;
    std::string dog_breed;
    int *dog_age;
    int dog_cost;
};