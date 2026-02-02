#include <iostream>

using namespace std;

int main() {
    int marks;

    // Input marks out of 100
    cout << "Enter student marks (0-100): ";
    cin >> marks;

    // Grade logic using only if statements
    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    }
    if (marks >= 80 && marks < 90) {
        cout << "Grade: A" << endl;
    }
    if (marks >= 70 && marks < 80) {
        cout << "Grade: B" << endl;
    }
    if (marks >= 60 && marks < 70) {
        cout << "Grade: C" << endl;
    }
    if (marks < 60) {
        cout << "Grade: Fail" << endl;
    }

    return 0;
}
