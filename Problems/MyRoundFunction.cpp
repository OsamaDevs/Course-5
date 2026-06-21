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
int roundNumber(double number) {
    /*
      Sol 1:
      split using diff between casted num and the uncasted one
      if ( floating point part> 0.5)
      cast to int and add 1
      else
        cast only


        Sol 2:

     */

    int integerPart = (int) number;
    double floatingPart = getFractionPart(number);

    if (abs(floatingPart) >= 0.5)
    {
        if (number>0)
            return ++integerPart;
        else
            return --integerPart;
    }
    else
        return integerPart;

}

int main() {
    double number = readNumber("Enter A Number To Get it's Rounded Value: ");

    cout<< "My Rounding Value Of " << number << " is " << roundNumber(number) << endl;
    cout<< "C++ Rounding Value Of " << number << " is " << round(number) << endl;

}