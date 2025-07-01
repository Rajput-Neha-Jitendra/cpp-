// increment and decrement operators

#include <iostream>
using namespace std;

int main() {
    int a = 20, b = 50, inc_a, dec_b;

    // incrementing a by 1
    inc_a = ++a;
    cout << "Increment_a = " << inc_a << endl;


    // decrementing b by 1   
    dec_b = --b;
    cout << "Decrement_b = " << dec_b << endl;

    return 0;
}