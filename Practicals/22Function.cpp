//Calling a Function
#include <iostream>
using namespace std;

// declaring a function
void greet() {
    cout << "Hello Shirpur!!!";
}

int main() {

    // calling the function
    greet();

    return 0;
}

/* Function with parameters
 program to print a text*/

#include <iostream>
using namespace std;

// display a number
void displayNum(int n1, float n2) {
    cout << "The int number is " << n1;
    cout << "The double number is " << n2;
}

int main() {
     
     int num1 = 5;
     double num2 = 5.5;

    // calling the function
    displayNum(num1, num2);

    return 0;
}