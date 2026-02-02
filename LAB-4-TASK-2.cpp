#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;

    // Prompt user for age input
    cout << "Enter age: ";
    cin >> age;

    // Classification logic using ternary operators
    // Child if < 13, Teenager if 13-19, Adult if >= 20
    string category = (age < 13) ? "Child" : (age <= 19) ? "Teenager" : "Adult";

    // Display the classified result
    cout << "Age " << age << " falls under the category: " << category << endl;

    return 0;
}
