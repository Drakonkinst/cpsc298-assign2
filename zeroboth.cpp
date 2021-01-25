#include <iostream>

using namespace std;

void zeroBoth(int& firstNum, int& secondNum) {
    firstNum = 0;
    secondNum = 0;
}

int main(int argc, char **argv) {
    int firstNum = 5;
    int secondNum = 3;

    cout << "Testing zeroBoth() with integers " << firstNum << " and "
        << secondNum << endl;

    zeroBoth(firstNum, secondNum);

    cout << "First number: " << firstNum << endl;
    cout << "Second number: " << secondNum << endl;
    
    return 0;
}
