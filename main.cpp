#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    int firstNumber, secondNumber;

    cout << "¬вед≥ть перше число: ";
    cin >> firstNumber;

    cout << "¬вед≥ть друге число: ";
    cin >> secondNumber;

    if (firstNumber == secondNumber) {
        cout << "„исла р≥вн≥: " << firstNumber << " ≥ " << secondNumber << endl;
    }
    else {
        int minNumber = (firstNumber < secondNumber) ? firstNumber : secondNumber;
        int maxNumber = (firstNumber > secondNumber) ? firstNumber : secondNumber;

        cout << "„исла у пор€дку зростанн€: " << minNumber << " ≥ " << maxNumber << endl;
    }

    return 0;
}
