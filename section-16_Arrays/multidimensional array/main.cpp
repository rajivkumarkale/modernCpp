#include <iostream>

int main() {
    int arr[][3]{{1, 2}, {4, 5, 6}};

    for (size_t row = 0; row < std::size(arr); row++) {
        for (size_t col = 0; col < std::size(arr[row]); col++) {
            std::cout << arr[row][col] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}