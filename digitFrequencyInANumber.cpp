//
// Created by osama on 4/20/2026.
//

#include <iostream>
using namespace std;

int readPositiveInteger(string message) {
    int number = 0;

    do {
        cout<< message;
        cin>> number;
    } while (number<0);

    return number;
}

int getFrequnceyOfaDigit(int number , short digit) {
    int remainder = 0 , frequency = 0;

    while (number>0) {
        remainder = number % 10;
        number /=10;

        if (digit == remainder)
            frequency++;
    }

    return frequency;
}

void printResult(int number , short digit , int frequency) {
    cout<< "The Digit " << digit << " Was Repeated " << frequency << " Time/s In: " << number << endl;
}
int main() {
    int number = readPositiveInteger("Enter The Full Number: ");
    short digit = readPositiveInteger("Enter The Digit To Get Frequency: ");
    int frequency = getFrequnceyOfaDigit(number , digit);

    printResult(number , digit , frequency);

    return 0;
}