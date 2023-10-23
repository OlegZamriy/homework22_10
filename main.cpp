#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a four-digit number: ";
    cin >> number;

    if (number < 1000 || number > 9999) {
        cout << "Error: The entered number is not a four-digit number." << endl;
        return 1;  
    }

     int thousands = number / 1000;
    int hundreds = (number / 100) % 10;
    int tens = (number / 10) % 10;
    int ones = number % 10;

     int newNumber = hundreds * 1000 + thousands * 100 + ones * 10 + tens;

    cout << "The number after swapping: " << newNumber << endl;

    return 0;
}
