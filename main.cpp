#include <iostream>
using namespace std;

int main() {
    int maxNumber, currentNumber;

    cout << "Enter 7 integers, one at a time:" << endl;

    for (int i = 0; i < 7; i++) {
        cout << "Enter number " << (i + 1) << ": ";
        cin >> currentNumber;

        if (i == 0 || currentNumber > maxNumber) {
            maxNumber = currentNumber;
        }
    }

    cout << "The maximum number is: " << maxNumber << endl;

    return 0;
}
