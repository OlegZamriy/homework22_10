#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
    SetConsoleOutputCP(1251);
    int firstNumber, secondNumber;

    cout << "������ ����� �����: ";
    cin >> firstNumber;

    cout << "������ ����� �����: ";
    cin >> secondNumber;

    if (firstNumber == secondNumber) {
        cout << "����� ���: " << firstNumber << " � " << secondNumber << endl;
    }
    else {
        int minNumber = (firstNumber < secondNumber) ? firstNumber : secondNumber;
        int maxNumber = (firstNumber > secondNumber) ? firstNumber : secondNumber;

        cout << "����� � ������� ���������: " << minNumber << " � " << maxNumber << endl;
    }

    return 0;
}
