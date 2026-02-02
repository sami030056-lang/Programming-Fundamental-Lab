#include <iostream>

using namespace std;

int main() {
    int number;

    // Get integer input from user
    cout << "Enter an integer: ";
    cin >> number;

    // Check if positive using only the if statement
    if (number > 0) {
        cout << "The number is positive." << endl;
    }

    return 0;
}
