//
// Created by osama on 5/23/2026.
//

#include <iostream>

using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout<< message;
        cin>> number;
    }while (number<0);

    return number;
}

void printPattern(int number) {
    int A = 65;

    for (int i = 0; i<= number; i++) {

        for (int j = 0; j<= i; j++) {
            cout<< (char) A;
        }
        cout<< '\n';
        A++;
    }
}

int main() {
printPattern(readPositiveNumber("Enter A Positive Number: "));
}