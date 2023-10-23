#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter a six-digit number: ";
    string input;
    cin >> input;

    if (input.length() != 6) {
        cout << "Error: The entered number is not a six-digit number." << endl;
        return 1;  // Exit the program with an error code
    }

    int sum1 = (input[0] - '0') + (input[1] - '0') + (input[2] - '0');
    int sum2 = (input[3] - '0') + (input[4] - '0') + (input[5] - '0');

    if (sum1 == sum2) {
        cout << "This is a happy number!" << endl;
    }
    else {
        cout << "This is not a happy number." << endl;
    }

    return 0;
}
