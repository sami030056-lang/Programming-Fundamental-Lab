#include <iostream>

using namespace std;

int main() {
    int num;

    // Prompt user for input
    cout << "Enter an integer: ";
    cin >> num;

    // Check if even using modulus operator
    if (num % 2 == 0) {
        cout << "The number is even" << endl;
    }

    return 0;
}
