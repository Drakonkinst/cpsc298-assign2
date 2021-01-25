#include <iostream>

using namespace std;

int main(int argc, char **argv) {
    const int SIZE = 10;
    int numberArray[SIZE];

    // Read numbers
    cout << "Enter " << SIZE << " non-negative numbers: ";
    for(int i = 0; i < SIZE; ++i) {
        int num;
        cin >> num;
        
        // Must be non-negative
        if(num <= 0) {
            cout << "Numbers must be non-negative!" << endl;
            return 1;
        }

        numberArray[i] = num;
    }

    // Print numbers
    for(int i = 0; i < SIZE; ++i) {
        cout << numberArray[i] << " ";
    }
    cout << endl;

    return 0;
}
