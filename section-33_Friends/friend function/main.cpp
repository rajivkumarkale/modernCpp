#include <iostream>
#include <string>

class Dog {
   public:
    Dog(std::string dog_name, int dog_age)
        : dog_name(dog_name), dog_age(dog_age) {}

    friend void debug_dog_info(Dog& dog);
    friend void debug_dog_info();

   private:
    std::string dog_name;
    int dog_age;

    void increment_age() { dog_age += 7; }
};

void debug_dog_info(Dog& dog) {
    dog.increment_age();
    std::cout << "Dog: [ name: " << dog.dog_name << ", age: " << dog.dog_age
              << " ]" << std::endl;
}

void debug_dog_info() {
    Dog dog("tommy", 4);
    std::cout << "Dog: [ name: " << dog.dog_name << ", age: " << dog.dog_age
              << " ]" << std::endl;
}

int main() {
    Dog dog1("yoyo", 3);

    debug_dog_info(dog1);
    debug_dog_info();

    return 0;
}