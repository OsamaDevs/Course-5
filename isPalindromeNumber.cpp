//
// Created by osama on 4/27/2026.
//

#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;

    do {
        cout<< message;
        cin>> number;
    } while (number <0);

    return number;
}

int reverseNumber(int number) {
    int remainder = 0, reversed = 0;

    while (number>0) {
        remainder = number % 10;
        number/= 10;

        reversed = reversed*10 + remainder;
    }

    return reversed;
}

bool isPilindrome(int originalNumber , int reversedNumber) {
    return originalNumber == reversedNumber;
}

void printResult(bool isPilindrome) {
    if (isPilindrome)
        cout<< "Number is Pilindrome!" << endl;
    else
        cout<< "Number is NOT Pilindrome!" << endl;
}

int main() {
    int number = readPositiveNumber("Enter A Number To Check If it's A Pelindrome Number: ");

    printResult(isPilindrome(number,reverseNumber(number)));
}


