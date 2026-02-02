#include <iostream>

using namespace std;

int main() {
    double balance, withdrawalAmount;

    // Get current balance and withdrawal request
    cout << "Enter your account balance: ";
    cin >> balance;
    cout << "Enter withdrawal amount: ";
    cin >> withdrawalAmount;

    // Check if enough funds are available
    if (withdrawalAmount <= balance) {
        balance -= withdrawalAmount;
        cout << "Transaction successful." << endl;
        cout << "Remaining balance: $" << balance << endl;
    } else {
        cout << "Insufficient balance." << endl;
    }

    return 0;
}
