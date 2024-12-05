#include <iostream>
using namespace std;

int main() {
    int scores[] = {1, 2, 3};
    int *p_scores = scores;

    cout << scores << " - " << p_scores << endl;

    cout << p_scores[2] << endl;
    p_scores[2] = 9;

    cout << p_scores[2] << endl;

    int num2 = 4;
    //scores = &num2;

    return 0;
}