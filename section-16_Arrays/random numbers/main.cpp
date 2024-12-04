#include <ctime>
#include <iostream>

int main() {
    std::srand(std::time(0));

    // for cube 1-6
    int diceValue;

    for (size_t i{}; i < 20; i++) {
        diceValue = (std::rand() % 6) + 1;
        std::cout << diceValue << std::endl;
    }

    return 0;
}