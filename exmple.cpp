#include <iostream>
using namespace std;

// Function to add two numbers
//numbers should be whole numbers
double add(double num1, double num2) {
    return num1 + num2;
}

// Function to multiply two numbers
double multiply(double num1, double num2) {
    return num1 * num2;
}

int main() {
    double num1, num2;

    // Asking for user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calling add function and displaying the result
    double sum = add(num1, num2);
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    // Calling multiply function and displaying the result
    double product = multiply(num1, num2);
    cout << "The product of " << num1 << " and " << num2 << " is: " << product << endl;

    return 0;
}


