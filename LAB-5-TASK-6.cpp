#include <iostream>

using namespace std;

int main() {
    char grade;
    int yearsOfService;
    double basicSalary = 0, bonus = 0, grossSalary, tax = 0, netSalary;

    // Input employee details
    cout << "Enter Employee Grade (A, B, or C): ";
    cin >> grade;
    cout << "Enter Years of Service: ";
    cin >> yearsOfService;

    // 1. Determine Basic Salary based on Grade
    if (grade == 'A' || grade == 'a') basicSalary = 50000;
    if (grade == 'B' || grade == 'b') basicSalary = 30000;
    if (grade == 'C' || grade == 'c') basicSalary = 20000;

    // 2. Calculate Bonus based on service years
    if (yearsOfService >= 10) bonus = basicSalary * 0.10;
    if (yearsOfService >= 5 && yearsOfService <= 9) bonus = basicSalary * 0.05;
    if (yearsOfService < 5) bonus = 0;

    grossSalary = basicSalary + bonus;

    // 3. Determine Tax Deductions based on Gross Salary
    if (grossSalary > 40000) tax = grossSalary * 0.20;
    if (grossSalary >= 30000 && grossSalary <= 40000) tax = grossSalary * 0.10;
    if (grossSalary < 30000) tax = 0;

    // 4. Final Calculation
    netSalary = grossSalary - tax;

    // Display Results
    cout << "\n--- Payroll Summary ---" << endl;
    cout << "Basic Salary: $" << basicSalary << endl;
    cout << "Bonus:        $" << bonus << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Tax:          $" << tax << endl;
    cout << "Net Salary:   $" << netSalary << endl;

    return 0;
}
