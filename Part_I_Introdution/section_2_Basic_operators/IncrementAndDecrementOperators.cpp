#include <iostream>

using namespace std;

int main() {
    int x;
    x = 0;
    cout << "Initial value of x " << " -> " << x << endl;
    cout << "Post incrementing x " << " -> " << x++ /* x += 1; */ << endl;
    cout << "Value of x after post increment " << " -> " << x << endl;
    cout << "Pre incrementing x " << " -> " << ++x /* x += 1; */ << endl;
    cout << "Value of x after pre increment " << " -> " << x /* x += 1; */ << endl;
    cout << "Post decrementing x " << " -> " << x-- /* x -= 1 */ << endl;
    cout << "Value of x after post decrement " << " -> " << x << endl;
    cout << "Pre decrementing x " << " - > " << --x /* x -=1 */ << endl;
    cout << "Value of x after pre decrement " << " -> " << x << endl;
    return 0;    
}