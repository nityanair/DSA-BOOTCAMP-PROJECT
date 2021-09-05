#include <iostream>

using namespace std;

int main() {
    int a = 0, b = 1, c, n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "\nThe Fibonacci series, upto the " << n << "th term, is:\n\t" << a << " " << b;

    for (int i = 2; i < n; i++) {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }

    return 0;
}
