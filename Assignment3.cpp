#include <iostream>

using namespace std;

int main() {
    int year;

    cout << "Enter a year (YYYY): ";
    cin >> year;

    if (year % 4 == 0)
        cout << "\nThe year which you have entered is a leap year!";
    else
        cout << "\nThe year which you have entered is not a leap year!";

    return 0;
}
