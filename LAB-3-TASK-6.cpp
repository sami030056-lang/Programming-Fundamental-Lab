#include <iostream>

using namespace std;

int main() {
    double distance, fuelEfficiency, fuelCost, totalTripCost;
    
    // Display program title
    cout << "Trip Cost Estimator" << endl;
    cout << "-------------------" << endl;
    
    // Prompt user for trip details
    cout << "Enter distance of the trip in kilometers: ";
    cin >> distance;
    cout << "Enter vehicle's fuel efficiency (km per liter): ";
    cin >> fuelEfficiency;
    cout << "Enter fuel cost per liter: ";
    cin >> fuelCost;
    
    // Total Trip Cost Formula: (Distance / Fuel Efficiency) * Fuel Cost per Liter
    totalTripCost = (distance / fuelEfficiency) * fuelCost;
    
    // Output the calculated total cost
    cout << "Total trip cost: Rs " << totalTripCost << endl;
    
    return 0;
}
