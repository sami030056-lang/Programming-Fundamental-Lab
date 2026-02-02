#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;

    // Prompt user for an integer
    cout << "Enter an integer : ";
    cin >> number;

    // Using ternary operator for evaluation
    string result = (number % 2 == 0) ? "is even" : "is odd";

    // Display formatted output
    cout << "The number " << number << " " << result << endl;

    return 0;
}
