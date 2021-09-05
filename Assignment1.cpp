#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the value of the first number: ";
    cin >> a;
    cout << "Enter the value of the second number: ";
    cin >> b;

    cout << "\nThe numbers which you have entered (before swapping) are: a = " << a << ", b = " << b;

    c = a;
    a = b;
    b = c;

    cout << "\nThe numbers which you have entered (after swapping) are: a = " << a << ", b = " << b;

    return 0;
}
