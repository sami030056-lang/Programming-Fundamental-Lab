#include <iostream>

using namespace std;

int main() {
    char signal;

    // Prompt for signal color code
    cout << "Enter signal color (R for Red, G for Green, Y for Yellow): ";
    cin >> signal;

    // Response logic based on input character
    if (signal == 'R' || signal == 'r') {
        cout << "Red: Stop" << endl;
    }
    if (signal == 'G' || signal == 'g') {
        cout << "Green: Go" << endl;
    }
    if (signal == 'Y' || signal == 'y') {
        cout << "Yellow: Slow Down" << endl;
    }

    return 0;
}
