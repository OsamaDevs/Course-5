//
// Created by osama on 4/28/2026.
//

#include <iostream>
using namespace std;


int readPositiveNumber(string message) {

    int number = 0;
    do {
       cout<< message;
        cin>> number;
    } while (number<0);

    return number;
}

void printPattern(int number) {
    int A = 65;
    int firstLetter = A + number;

    for ( int i = firstLetter; i> A; i--) {
        for (int j = 0; j<i; j++)
            cout<< (char) i;

        cout<< endl;
    }
}

int main() {
    printPattern(readPositiveNumber("Enter A Number: "));
}