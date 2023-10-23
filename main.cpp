#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number > 0) {
        cout << "This is a positive number." << endl;
    }
    else if (number < 0) {
        cout << "This is a negative number." << endl;
    }
    else {
        cout << "This number is equal to zero." << endl;
    }

    return 0;
}
