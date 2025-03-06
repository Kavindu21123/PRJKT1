#include <iostream>
using namespace std;

int main() {
    double num1, num2, sum;

    // Asking for user input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    // Calculating the sum
    sum = num1 + num2;

    // Displaying the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}