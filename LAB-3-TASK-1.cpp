#include <iostream>
using namespace std;

int main() {
    // Initialize coordinates directly as double variables
    double x1 = 3, y1 = 4;
    double x2 = 6, y2 = 8;
    
    // Formula: (x2 - x1)^2 + (y2 - y1)^2
    double squared_distance = (x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1);
    
    // Display output in the specified format
    cout << "The squared distance between the points (" << x1 << ", " << y1 
         << ") and (" << x2 << ", " << y2 << ") is: " << squared_distance << endl;
    
    return 0;
}
