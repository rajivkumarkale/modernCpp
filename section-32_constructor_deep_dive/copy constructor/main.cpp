#include <iostream>

#include "Person.hpp"

int main() {
    Person person1("Rajiv", "kale");
    person1.print_info();

    Person person2(person1);
    person2.print_info();

    std::cout << "-------" << std::endl;

    person1.set_age(28);
    person1.print_info();
    person2.print_info();

    std::cout << "-------" << std::endl;
    Person s1{"John", "out"};
    Person s2{"Sean", "out"};
    Person s3{"Billy", "out"};

    // Copies are created and then stored in arrays
    Person students[]{s1, s2, s3, Person{s1}};

    // Use references to avoid copy
    for (Person student : students) {
        student.print_info();
    }

    return 0;
}