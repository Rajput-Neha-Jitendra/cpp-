/* Break with For-Loop
program to print the value of i*/

#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        // break condition     
        if (i == 4) {
            break;
        }
        cout << i << endl;
    }

return 0;
}

/*Break with While-Loop
 program to find the sum of positive numbers
 if the user enters a negative numbers, break ends the loop
 the negative number entered is not added to sum*/

#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    while (true) {
        // take input from the user
        cout << "Enter a number: ";
        cin >> number;

        // break condition
        if (number < 0) {
            break;
        }

        // add all positive numbers
        sum += number;
     
    }

    // display the sum
    cout << "The sum is " << sum << endl;

    return 0;
}


/*Break statement inside
nested for loop*/

#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    // nested for loops

    // first loop
    for (int i = 1; i <= 3; i++) {
        // second loop
        for (int j = 1; j <= 3; j++) {
            if (i == 2) {
                break;
            }
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    return 0;
}
    
