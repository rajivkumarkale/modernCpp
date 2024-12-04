#include <iostream>

int main() {
    char message[] = "Hello World";
    std::cout << message << std::endl;

    message[0] = 'Z';
    std::cout << message << std::endl;

    return 0;
}