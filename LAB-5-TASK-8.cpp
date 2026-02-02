#include <iostream>

using namespace std;

int main() {
    double salary;
    int workExperience;

    // Get applicant details
    cout << "Enter your monthly salary: ";
    cin >> salary;
    cout << "Enter years of work experience: ";
    cin >> workExperience;

    // Eligibility logic using if-else
    if (salary >= 25000 || (salary >= 20000 && workExperience > 5)) {
        cout << "Congratulations! You are eligible for a loan." << endl;
    } else {
        cout << "Sorry, you do not meet the eligibility criteria for a loan." << endl;
    }

    return 0;
}
