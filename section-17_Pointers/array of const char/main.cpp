#include<iostream>
using namespace std;

int main(){
    const char* students[] = {
        "himmat",
        "rajiv"
    };

    students[0] = "arpit"; // this is allowed

    // if we want to prevent changing the strings
    const char* const students1[] = {
        "himmat",
        "rajiv"
    };

    // students1[0] = "arpit"; // compilation error

    return 0;
}