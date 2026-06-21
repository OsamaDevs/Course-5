//
// Created by osama on 6/16/2026.
//

#include <iostream>
#include <cmath>
using namespace std;

double readNumber(string message) {
    double number = 0;

    cout<< message;
    cin>> number;


    return number;
}


float getFractionPart(double number) {
    return number - (int) number;
}

int ceilNumber(double number) {
    double fractionPart = getFractionPart(number);

    if (abs(fractionPart) > 0) {
        if (number > 0)
            return (int) number + 1;
        else
            return (int) number;
    }
    else
        return number;

}

/*
 *
 *  -1.1 =
 *  -10.9 = -10;
 */

int main() {
    double number = readNumber("Enter A Number To Get it's Ceil Value: ");

    cout<< "My Ceil Value Of " << number << " is " << ceilNumber(number) << endl;
    cout<< "C++ Ceil Value Of " << number << " is " << ceil(number) << endl;

}