#include <iostream>
using namespace std;

int main() {
    int number;

    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "number " << number << " is even." << endl;
    }
    else {
        cout << "number " << number << " is odd." << endl;
    }

    return 0;
}
