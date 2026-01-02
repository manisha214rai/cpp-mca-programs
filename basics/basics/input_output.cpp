/*
 * Program: User Input and Output
 * Description: Takes user's name and age as input and displays a greeting message
 * Author: Manisha
 * Date: January 2, 2026
 */

#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name);  // Reads full line including spaces

    cout << "Enter your age: ";
    cin >> age;

    cout << "Hello, " << name << "! You are " << age << " years old." << endl;
    return 0;
}
