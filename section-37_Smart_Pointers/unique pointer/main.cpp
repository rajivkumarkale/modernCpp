#include <iostream>
#include <memory>

#include "Dog.hpp"

int main() {
    /*
    Dog *p_dog3 = new Dog("Dog3");

    // Can also manage a previously allocated space managed by a raw pointer.
    // Ideally we should make p_dog3 = nullptr to make sure that we don't use
    // the raw pointer from this point onwards. As the memory is now managed by
    // unique_ptr
    std::unique_ptr<Dog> up_dog4(p_dog3);

    std::unique_ptr<Dog> up_dog5(new Dog("Dog5"));
    std::unique_ptr<int> up_int2(new int(200));

    // can also initialize with nullptr and give it memroy to manage later
    // (using std::move).
    std::unique_ptr<Dog> up_dog6(nullptr);

    // can use a unique pointer just like we use a raw pointer.
    up_dog5->print_dog();  // calling function with -> operator

    // Assign to fundamental type
    *up_int2 = 500;

    std::cout << "Integer is: " << *up_int2 << std::endl;  // dereferencing
    std::cout << "Integer lives at address: " << up_int2.get()
              << std::endl;  // to get the raw pointer.
    */

    /*
     std::unique_ptr<Dog> up_dog_7 = std::make_unique<Dog>("Dog7");
     up_dog_7->print_dog();

     std::unique_ptr<int> p_int3 = std::make_unique<int>(30);
     *p_int3 = 67;

     std::cout << "Value pointed to by p_int3 is :" << *p_int3 << std::endl;
     std::cout << "p_int3 pointing at address :" << p_int3.get() << std::endl;
     */

    /*
    std::unique_ptr<Dog> up_dog8 = std::make_unique<Dog>("Dog8");
    up_dog8->print_dog();

    // Can get the wrapped pointer address : useful for older raw pointer APIs
    std::cout << "Dog8 memory address :" << up_dog8.get() << std::endl;

    // Copies and Assignments are not allowed with unique ptr
    //std::unique_ptr<Dog> up_dog9 =
        up_dog8;  // Error: Copy Assignment not allowed, It is deleted.
    //std::unique_ptr<Dog> up_dog10(
        up_dog9);  // Error: Copy Constructor is deleted.
    */

    /*
        std::unique_ptr<Dog> up_dog11 = std::make_unique<Dog>("Dog11");
        {
            // Now up_dog_12 manages Dog11 and up_dog11 points to
       nothing(nullptr) std::unique_ptr<Dog> up_dog12 = std::move(up_dog11);

            up_dog12->print_dog();
            std::cout << "Dog12 memory address :" << up_dog12.get() <<
       std::endl; std::cout << "up_dog11 is now nullptr :" << up_dog11.get() <<
       std::endl;
        }
    */

    std::unique_ptr<Dog> up_dog13 = std::make_unique<Dog>("Dog13");
    up_dog13.reset();  // releases the memory and sets pointer to nullptr

    // Can use unique pointer in if statement to see if it points somewhere
    // valid
    if (up_dog13) {
        std::cout << "up_dog13 points somewhere valid:" << up_dog13.get()
                  << std::endl;
    } else {
        std::cout << "up_dog13 points is null:" << up_dog13.get() << std::endl;
    }

    return 0;
}