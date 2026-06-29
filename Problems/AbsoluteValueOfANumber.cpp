//
// Created by osama on 6/16/2026.
//


#include <iostream>
using namespace std;

int readNumber(string message) {
    int number = 0;

    cout<< message;
    cin>> number;


    return number;
}

int getAbsoluteValue(int number) {

    if (number>=0)
        return number;
    else
        return number * -1;

}

int main() {
    int number = readNumber("Enter A Number To Get it's Absolute Value: ");

    cout<< "My Absolute Value Of " << number << " is " << getAbsoluteValue(number) << endl;
    cout<< "C++ Absolute Value Of " << number << " is " << abs(number) << endl;
}