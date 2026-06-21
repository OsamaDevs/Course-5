// //
// // Created by osama on 4/5/2026.
// //
//
// #include <iostream>
// using namespace std;
//
// int readPositiveNumber(string message) {
//     int number = 0;
//
//     do
//     {
//         cout << message;
//         cin>> number;
//
//     } while (number<0);
//
//     return number;
//
// }
//
// string reverseNumber(int number) {
//     string strNumber = to_string(number);
//     string Reversed = "";
//     for (int i = strNumber.length()-1 ; i>= 0; i-- ) {
//         Reversed += strNumber[i];
//     }
//     return Reversed;
// }
//
// void printReversedString(string S) {
//
//     for (int i = 0 ; i < S.length() ; i++ ) {
//         cout<< S[i] << '\n';
//     }
//
// }
// int main() {
//     printReversedString(reverseNumber(readPositiveNumber("Enter A Positive Number: ")));
//
// }
//


// Dr's solution:
#include <iostream>
using namespace std;

int readNumber(string message) {
    int number= 0;
    do {
        cout<< message;
        cin>> number;

    } while (number<0);

    return number;
}

void printReverseNumber(int number) {

    while (number > 0) {

        int remainder = number % 10;
        number /= 10;

        cout<< remainder;
    }

    cout<< '\n';

}
int main() {

   printReverseNumber(readNumber("Enter A Number To Reverse: "));



}