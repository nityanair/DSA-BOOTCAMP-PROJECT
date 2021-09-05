#include <iostream>

using namespace std;

int countWords(string str) {
    int n = 1;

    for (int i = 1; i < str.length() - 1; i++) {
        if (isupper(str[i]))
            n++;
    }

    return n;
}

int main() {
    string camelcase;

    cout << "Enter a camelcase string: ";
    cin >> camelcase;

    cout << "\nThe number of words in the entered string are " << countWords(camelcase);

    return 0;
}
