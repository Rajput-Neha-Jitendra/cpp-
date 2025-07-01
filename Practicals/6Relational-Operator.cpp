#include <iostream>
using namespace std;

int main() {
    int n, e;
    n = 6;
    e = 9;
    bool result;

    result = (n == e);   // false
    cout << "6 == 9 is " << result << endl;

    result = (n != e);  // true
    cout << "6 != 9 is " << result << endl;

    result = n > e;   // false
    cout << "6 > 9 is " << result << endl;

    result = n < e;   // true
    cout << "6 < 9 is " << result << endl;

    result = n >= e;  // false
    cout << "6 >= 9 is " << result << endl;

    result = n <= e;  // true
    cout << "6 <= 9 is " << result << endl;

    return 0;
}