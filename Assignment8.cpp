#include <iostream>

using namespace std;

int main() {
    int myArray[] = { 1, 2, 3, 4, 5 };
    int length = sizeof(myArray) / sizeof(myArray[0]);
    int n;

    cout << "Enter the number of left rotations to make: ";
    cin >> n;

    cout << "\nOriginal array:\n";
    for (int i = 0; i < length; i++)
        cout << myArray[i] << " ";

    for (int i = 0; i < n; i++) {
        int j, first;
        first = myArray[0];

        for (j = 0; j < length - 1; j++)
            myArray[j] = myArray[j + 1];

        myArray[j] = first;
    }

    cout << "\nArray after left rotation of " << n << " iterations:\n";
    for (int i = 0; i < length; i++)
        cout << myArray[i] << " ";

    return 0;
}
