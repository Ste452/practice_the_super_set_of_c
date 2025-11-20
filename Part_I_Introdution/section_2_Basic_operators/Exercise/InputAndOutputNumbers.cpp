#include <iostream>

using namespace std;

int main()
{
	int number1, number2, r;

	cout << "Enter the first number";
	cin >> number1;
	cout << "Enter the second number";
	cin >> number2;

	r = number1 + number2;

	cout << "Addition of numbers" << r << endl;

	r = number1 - number2;
	cout << "Subtraction of numbers" << r << endl;

	r = number1 * number2;
	cout << "Multiplication of numbers" << r << endl;

	r = number1 / number2;
	cout << "Division of numbers" << r << endl;

	r = number1 % number2;
	cout << "Rest of division" << r << endl;

	return 0;
}