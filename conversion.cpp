#include <iostream>
#include <cmath>

using namespace std;


void printOutput(float meters, float centimeters) {
    cout << "Meters: " << meters << endl;
    cout << "Centimeters: " << centimeters << endl;
}

void convertImperialToMetric(float feet, float inches) {
    const float INCHES_TO_FEET = 1.0 / 12.0;
    const float FEET_TO_METERS = 0.3048;
    const float METERS_TO_CENTIMETERS = 100.0;

    float totalFeet = feet + inches * INCHES_TO_FEET;
    float totalMeters = totalFeet * FEET_TO_METERS;
    float meters = floor(totalMeters);
    float centimeters = (totalMeters - meters) * METERS_TO_CENTIMETERS;

    printOutput(meters, centimeters);
}

void readInput() {
    float feet;
    float inches;

    cout << "Please input the length in feet and inches." << endl;
    cout << "Feet: ";
    cin >> feet;
    cout << "Inches: ";
    cin >> inches;
    cout << endl;

    convertImperialToMetric(feet, inches);
}

int main(int argc, char **argv) {
    bool done = false;
    do {
        // Read input and perform conversion
        readInput();

        // Ask user if they want to keep going
        string input;
        cout << "Type \"exit\" to quit, or anything else to continue: ";
        cin >> input;

        if(input == "exit") {
            done = true;
        }
    } while(!done);

    return 0;
}
