#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    // Variable initialization
    double score1 = 85.5;
    double score2 = 90.75;
    double score3 = 88.25;
    
    // Calculate the average
    double average = (score1 + score2 + score3) / 3.0;
    
    // Display output with two decimal places
    cout << "The average of " << score1 << " , " << score2 << " and " << score3 << " = ";
    cout << fixed << setprecision(2) << average << endl;
    
    return 0;
}
