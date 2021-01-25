#include <iostream>
#include <iomanip>

using namespace std;

float addTax(float taxRate, float cost) {
    // Convert percent to decimal
    float taxAsDecimal = taxRate / 100.0;
    
    float costWithTax = cost * (1.0 + taxAsDecimal);
    return costWithTax;
}

int main(int argc, char **argv) {
    float taxRate = 5.0;
    float cost = 200.25;

    cout << fixed << setprecision(2);
    cout << "Testing with initial cost of $" << cost << " and " << taxRate
        << "\% tax" << endl;

    float costWithTax = addTax(taxRate, cost);
    cout << "Cost with tax: $" << costWithTax << endl;
    return 0;
}

