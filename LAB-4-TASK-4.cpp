#include <iostream>
#include <string>

using namespace std;

int main() {
    double balance;
    bool isLoyal;

    // Input account details
    cout << "Enter account balance: ";
    cin >> balance;
    cout << "Are you a loyal customer? (1 for Yes, 0 for No): ";
    cin >> isLoyal;

    // Determine Account Type using ternary operators
    string accountType = (balance < 100) ? "Low Balance Account" : 
                         (balance <= 500) ? "Standard Account" : "Premium Account";

    // Determine Special Offer Eligibility using logical AND
    string offerStatus = (balance > 200 && isLoyal) ? "Eligible for special offer" : "Not eligible for special offer";

    // Display formatted results
    cout << "\nAccount Summary:" << endl;
    cout << "Account Type: " << accountType << endl;
    cout << "Offer Status: " << offerStatus << endl;

    return 0;
}
