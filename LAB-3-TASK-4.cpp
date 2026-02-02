#include <iostream>

using namespace std;

int main() {
    int number1, number2;
    
    // Prompt user for input
    cout << "Enter two numbers :" << endl;
    cout << "Number 1 : ";
    cin >> number1;
    cout << "Number 2 : ";
    cin >> number2;
    
    cout << endl;
    
    // Addition operation
    cout << "Addition:" << endl;
    cout << "   " << number1 << " + " << number2 << " = " << (number1 + number2) << endl;
    
    // Subtraction operation
    cout << "Subtraction:" << endl;
    cout << "   " << number1 << " - " << number2 << " = " << (number1 - number2) << endl;
    
    // Multiplication operation
    cout << "Multiplication:" << endl;
    cout << "   " << number1 << " * " << number2 << " = " << (number1 * number2) << endl;
    
    // Integer division
    cout << "Division:" << endl;
    cout << "   " << number1 << " / " << number2 << " = " << (number1 / number2) << endl;
    
    // Modulus operation
    cout << "Modulus:" << endl;
    cout << "   " << number1 << " % " << number2 << " = " << (number1 % number2) << endl;
    
    return 0;
}
