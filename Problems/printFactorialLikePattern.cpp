//
// Created by osama on 4/27/2026.
//


#include <iostream>

using namespace std;

//
// int readPositiveNumber(string message) {
//
//     int number = 0;
//     do {
//        cout<< message;
//         cin>> number;
//     } while (number<0);
//
//     return number;
// }
//
// int returnRepeatedNumber(int Number) {
//     int repeated = 0 , multiplier = 1;
//
//     for (int i = 0; i<Number; i++) {
//         repeated += Number * multiplier;
//         multiplier*=10;
//     }
//
//     return repeated;
//
// }
//
// void printResult(int Number) {
//
//     for (int i = Number; i>=1; i--) {
//         cout<< returnRepeatedNumber(i)<< endl;
//     }
//
// }
//
// int main() {
//     printResult(readPositiveNumber("Enter A Number From 1 to 9: "));
// }
//

// Trial 2:

//
// int readPositiveNumber(string message) {
//
//     int number = 0;
//     do {
//        cout<< message;
//         cin>> number;
//     } while (number<0);
//
//     return number;
// }
//
// void printResult(int Number) {
//
//     for (int i = Number; i>=1; i--) {
//         for (int j = i; j> 0;j--)
//             cout<< i;
//
//         cout<< endl;
//     }
//
// }
//
//
// int main() {
//    printResult( readPositiveNumber("Enter A Number: "));
//
// }

// Problem 13:


int readPositiveNumber(string message) {

    int number = 0;
    do {
       cout<< message;
        cin>> number;
    } while (number<0);

    return number;
}

void printResult(int Number) {

    for (int i = 1; i<=Number; i++) {
        for (int j = i; j> 0;j--)
            cout<< i;


        cout<< endl;
    }

}


int main() {
   printResult( readPositiveNumber("Enter A Number: "));

}
