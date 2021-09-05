#include <iostream>

using namespace std;

int main() {
    int size = 0, expr = 0, *myArray;

    cout << "Enter the number of students: ";
    cin >> size;

    myArray = (int *)malloc(sizeof(int) * size);

    for (int i = 0; i < size; i++) {
        cout << "Enter the marks of student " << i + 1 << ": ";
        cin >> myArray[i];
    }

    for (int i = 0; i < size; i++) {
        if (myArray[i] < 0 || myArray[i] > 100) {
            cout << "E: Invalid value of marks!";
            break;
        } else if (myArray[i] < 38)
            cout << "";
        else {
            if (myArray[i] % 5 == 0)
                expr = ((myArray[i] / 5) * 5);
            else
                expr = ((myArray[i] / 5) * 5 + 5);

            cout << expr << " ";
        }
    }

    return 0;
}
