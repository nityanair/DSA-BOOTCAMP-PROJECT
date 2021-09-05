#include <iostream>

using namespace std;

int main() {
    int myArray[10];
    int n, first, second;

    cout << "Enter the number of elements in the array [max. 10]: ";
    cin >> n;

    if (n <= 0)
        first = second = 0;
    else {
        for (int i = 0; i < n; i++) {
            cout << "Enter the value of element " << i + 1 << ": ";
            cin >> myArray[i];
        }

        first = second = myArray[0];
        for (int i = 1; i < n; i++) {
            if (first < myArray[i]) {
                second = first;
                first = myArray[i];
            } else if (myArray[i] > second && myArray[i] != first)
                second = myArray[i];
        }
    }

    if (second == first)
        cout << "\nThere is no second largest element!";
    else
        cout << "\nThe second largest element in the array is " << second;

    return 0;
}
