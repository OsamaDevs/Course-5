//
// Created by osama on 4/20/2026.
//

#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;

    do {
        cout << message;
        cin>> number;
    } while (number<0);

    return number;
}

int reverseNumber(int number) {

    int remainder= 0 , reversed= 0;

    while (number> 0 ) {
        remainder = number%10;
        number/=10;

        reversed = reversed * 10 + remainder;
    }
    return reversed;
}


void printNumber(int number) {
    int remainder = 0;

  while (number>0) {
      remainder = number%10;
      number/=10;
      cout<< remainder;
      cout<< '\n';

  }
}


int main() {
    printNumber(reverseNumber(readPositiveNumber("Enter A number")));

}