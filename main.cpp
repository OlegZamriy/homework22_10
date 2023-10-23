#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber;

    cout << "Enter the first number: ";
    cin >> firstNumber;

    cout << "Enter the second number: ";
    cin >> secondNumber;

    if (firstNumber < secondNumber) {
        cout << "The smaller number is: " << firstNumber << endl;
    }
    else if (secondNumber < firstNumber) {
        cout << "The smaller number is: " << secondNumber << endl;
    }
    else {
        cout << "The numbers are equal: " << firstNumber << endl;
    }

    return 0;
}
