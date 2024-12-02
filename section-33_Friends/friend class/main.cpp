#include <iostream>
#include <string>

class Dog {
   public:
    Dog(std::string dog_name, int dog_age)
        : dog_name(dog_name), dog_age(dog_age) {}

    friend class Cat;  // class Cat now has access to private variables of Dog
                       // class.

   private:
    std::string dog_name;
    int dog_age;

    void increment_age() { dog_age += 9; }
};

class Cat {
   public:
    Cat(std::string cat_name) : cat_name(cat_name) {}

    void show_info_about_dog(Dog& dog) const {
        dog.increment_age();
        std::cout << "dog name: " << dog.dog_name
                  << ", dog_age: " << dog.dog_age << std::endl;
    }

   private:
    std::string cat_name;
};

int main() {
    Dog dog("tommy", 4);
    Cat cat("meow");

    cat.show_info_about_dog(dog);

    return 0;
}