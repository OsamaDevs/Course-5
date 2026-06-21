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

double MySqrt(double number) {
    return pow(number, 0.5);
}


int main() {
    system("color 20");
    double number = readNumber("Enter A Number To Get it's Square Root: ");

    cout<< "My Square Root Of " << number << " is " << MySqrt(number) << endl;
    cout<< "C++ Square Root Of " << number << " is " << sqrt(number) << endl;

}