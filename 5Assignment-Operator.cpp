#include <iostream>
using namespace std;

int main() {
    int a, b;

    // 2 is assigned to a
    a = 8;

    // 7 is assigned to b
    b = 10;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "\nAfter b += a;" << endl;

    // assigning the sum of a and b to a
    b += a;  // b = b +a
    cout << "b = " << b << endl;

    return 0;
}