#include <iostream>

/*
=> compilation will fail for the below two functions:
    -> In c++ when we pass an array to a function, IT DECAYS INTO A POINTER TO ITS FIRST ELEMENT.
        Therefore int arr[] is equivalent to int* arr
    
    -> The compiler no longer knows the array's size, so it cannot generate a range-based for loop for it.

void print_arr(int arr[]) {
    for (int value : arr) {
        std::cout << "value: " << value << std::endl;
    }
}

void print_ptr(int *arr) {
    for (int value : arr) {
        std::cout << "value: " << value << std::endl;
    }
}
*/

int main() {
    int arr[] = {1, 3, 4, 5, 6, 7};

    // this will work without any issue as the compiler knows the size of the arr at compile time.
    for (int value : arr) {
        std::cout << "value: " << value << std::endl;
    }

    return 0;
}