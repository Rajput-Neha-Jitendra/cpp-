// C++ Program to print numbers from 10 to 20

#include <iostream>

using namespace std;

int main() {
    int i = 10; 

    // do...while loop from 1 to 5
    do {
        cout << i << " ";
        ++i;
    }
    while (i <= 20);
    
    return 0;
}

/* program to find the sum of positive numbers
 If the user enters a negative number, the loop ends
 the negative number entered is not added to the
 sum*/

#include <iostream>
using namespace std;

int main() {
    int number = 0;
    int sum = 0;

    do {
        sum += number;

        // take input from the user
        cout << "Enter a number: ";
        cin >> number;
    }
    while (number >= 5);
    
    // display the sum
    cout << "\nThe sum is " << sum << endl;
    
    return 0;
}
