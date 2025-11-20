#include <iostream>

using namespace std;

int main () {
    int number1, number2;

    cout << "Enter the first number: ";
    cin >> number1;
    cout << "Enter the second number: ";
    cin >> number2;
    number1 += number2; // number1 = number1 + number2; 
    cout << "Addition: ";
    cout << number2 << "-> " << number1 << endl;
    number1 -= number2; // number1 = number1 - number2;
    cout << "Subtraction: ";
    cout << number2 << "-> " << number1 << endl;
    number1 *= number2; // number1 = number1 * number2;
    cout << "Multiplication: ";
    cout << number2 << "-> " << number1 << endl;
    number1 /= number2; // number1 = number1 / number2;
    cout << "Division: ";
    cout << number2 << "-> " << number1 << endl;
    number1 %= number2; // number1 = number1 % number2;
    cout << "Division with remainder: ";
    cout << number2 << "->" << number1 << endl;
}   