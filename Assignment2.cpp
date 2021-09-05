#include <iostream>

using namespace std;

int main() {
    int a, b, c;

    cout << "Enter the value of the first number: ";
    cin >> a;
    cout << "Enter the value of the second number: ";
    cin >> b;
    cout << "Enter the value of the third number: ";
    cin >> c;

    if (a > b) {
        if (a > c)
            cout << "\n" << a << " is the largest number.", a;
        else
            cout << "\n" << c << " is the largest number.", c;
    } else if (b > c)
        cout << "\n" << b << " is the largest number.", b;
    else
        cout << "\n" << c << " is the largest number.", c;

    return 0;
}
