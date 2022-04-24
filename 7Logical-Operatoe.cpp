#include <iostream>
using namespace std;

int main() {
    bool result;

    result = (4 != 8) && (4 < 8);     // true
    cout << "(4 != 8) && (4 < 8) is " << result << endl;

    result = (4 == 8) && (4 < 5);    // false
    cout << "(4 == 8) && (4 < 5) is " << result << endl;

    result = (4 == 8) && (4 > 8);    // false
    cout << "(3 == 8) && (4 > 8) is " << result << endl;

    result = (4 != 8) || (4 < 8);    // true
    cout << "(4 != 8) || (3 < 5) is " << result << endl;

    result = (4 != 8) || (4 > 8);    // true
    cout << "(4 != 8) || (4 > 8) is " << result << endl;

    result = (4 == 8) || (4 > 8);    // false
    cout << "(4 == 8) || (4 > 8) is " << result << endl;

    result = !(6 == 3);    // true
    cout << "!(6 == 3) is " << result << endl;

    result = !(8 == 8);    // false
    cout << "!(8 == 8) is " << result << endl;

    return 0;
}