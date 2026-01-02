/*
 * Program: Arithmetic Operations
 * Description: Performs addition, subtraction, multiplication, and division on two integers
 * Author: Manisha
 * Date: January 2, 2026
 */

#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "\nResults:" << endl;
    cout << "Addition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;

    if (b != 0) {
        cout << "Division: " << static_cast<float>(a) / b << endl;
    } else {
        cout << "Division: Cannot divide by zero." << endl;
    }

    return 0;
}
