#include <iostream>

using namespace std;

int main() {
    int n, prime = 1;;

    cout << "Please enter a number: ";
    cin >> n;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            prime = 0;
            break;
        }
    }

    if (n == 1)
        cout << "\n1 is neither prime nor composite!";
    else {
        if (prime == 1)
            cout << "\n" << n << " is a prime number!";
        else
            cout << "\n" << n << " is a not prime number!";
    }

    return 0;
}
