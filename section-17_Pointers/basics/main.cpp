#include <iostream>
using namespace std;

int main() {
    /*
    char *p = "hello world!";
    // p[0] = 'Z'; // segmentation fault.

    cout << p << endl;
    */

    int number1 = 1;
    int number2 = 2;

    // Pointer to const
    const int* p_number = &number1;
    // *p_number = 55;  // compilation error: Pointer to const can't be modified
    p_number = &number2;  // this is allowed

    // const pointer
    int* const p_num = &number1;
    *p_num = 55;  // this is allowed
    // p_num = &number2; // compilation error: const pointer can't point to some
    // other location. cout << number1;

    return 0;
}