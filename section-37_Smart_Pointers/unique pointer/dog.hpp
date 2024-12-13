#pragma once
#include <string>

class Dog {
   public:
    Dog() = default;
    explicit Dog(std::string name_param);

    ~Dog();

    std::string get_name() const;
    void set_dog_name(const std::string& name);

    void print_dog() const;

   private:
    std::string dog_name{"Puffy"};
};