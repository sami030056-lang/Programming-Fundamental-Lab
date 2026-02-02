#include <iostream>
#include <iomanip> // For formatting decimals
using namespace std;

int main() {
    // Use constants for values that don't change
    const double SALES_TAX_RATE = 0.06; // 6% sales tax
    
    // Storing item prices in separate variables
    double item1 = 12.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 14.95;
    double item5 = 3.95;
    
    // Calculations
    double subtotal = item1 + item2 + item3 + item4 + item5;
    double salesTax = subtotal * SALES_TAX_RATE;
    double total = subtotal + salesTax;
    
    // Display individual prices
    cout << "Price of item 1: $" << item1 << endl;
    cout << "Price of item 2: $" << item2 << endl;
    cout << "Price of item 3: $" << item3 << endl;
    cout << "Price of item 4: $" << item4 << endl;
    cout << "Price of item 5: $" << item5 << endl;
    
    // Display results
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales Tax (6%): $" << salesTax << endl;
    cout << "Total: $" << total << endl;
    
    return 0;
}
