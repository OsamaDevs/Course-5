//
// Created by osama on 4/10/2026.
//

#include <iostream>
using namespace std;

long long readPositiveNumber(string message) {
    long long number = 0;
    do {
        cout<< message;
        cin>> number;
    } while (number< 0);

    return number;
}

long long getSumOfDigits(long long number) {
    long long sum = 0;
    long long remainder = 0;

    while (number>0) {
        remainder = number % 10;
        number /= 10;
        sum+= remainder;
    }

    return sum;

}

void printResult(long long sum) {
    cout<< "Sum of Digits = " << sum << endl;
}
int main() {
    printResult(getSumOfDigits(readPositiveNumber("Enter A Positive Number: ")));
}

