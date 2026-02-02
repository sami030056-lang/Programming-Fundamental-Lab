#include <iostream>

using namespace std;

int main() {
    double weight, height, bmi;
    
    // Input weight and height
    cout << "Enter weight in kilograms: ";
    cin >> weight;
    cout << "Enter height in meters: ";
    cin >> height;
    
    // BMI Formula
    bmi = weight / (height * height);
    
    // Display result
    cout << "Your Body Mass Index (BMI) is: " << bmi << endl;
    
    return 0;
}
