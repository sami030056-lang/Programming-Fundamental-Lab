#include <iostream>

using namespace std;

int main() {
    int n1, n2, n3;

    // Input three numbers
    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    int largest = n1;

    // Compare to find the maximum value
    if (n2 > largest) {
        largest = n2;
    }
    if (n3 > largest) {
        largest = n3;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
