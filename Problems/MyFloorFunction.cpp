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


int floorNumber(double number) {
    return number>=0? (int) number : (int) --number;
}

int main() {
    double number = readNumber("Enter A Number To Get it's Floored Value: ");

    cout<< "My Floor Value Of " << number << " is " << floorNumber(number) << endl;
    cout<< "C++ Floor Value Of " << number << " is " << floor(number) << endl;

}