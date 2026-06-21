// //
// // Created by osama on 4/5/2026.
// //
#include <iostream>
#include <cmath>
using namespace std;

// enum enPerfect {notPerfect , Perfect};
//
// int readNumber(string message) {
//     int number;
//     do {
//         cout<< message;
//         cin>> number;
//
//     } while (number<0);
//
//     return number;
// }
//
// enPerfect checkPerfectNum(int num) {
//
//     int halfNum = round(num / 2);
//
//     int sumOfDivisors = 0;
//
//     for (int i = 1; i<= halfNum; i++)
//     {
//
//         if (num % i == 0)
//         {
//             sumOfDivisors += i;
//         }
//
//     }
//
//     if (sumOfDivisors == num)
//         return Perfect;
//
//     return notPerfect;
//
// }
//
// void printResult(int n) {
//
//     if (checkPerfectNum(n) == notPerfect)
//     cout << "number is Not Perfect \n" ;
//     else
//         cout<< "number is Perfect! \n" ;
//
//
//
// }
//
// int main() {
//     cout<< "Pefect Number Checker\n";
//
//     printResult(readNumber("Enter A Number: "));
//
// }


// Dr's solution:
int readPositiveNum(string message) {
    int number = 0;
    do {
        cout << message;
        cin>> number;
    } while ( number <= 0);

    return number;
}

bool isPerfectNumber(int number) {
    int sum= 0;

    for (int i = 1; i< number; i++) {
        if (number % i == 0)
            sum += i;

    }

    return number == sum;

}

void printResult(int num) {
    if (isPerfectNumber(num))
        cout << num << " Is A Perfect Number" << endl;
    else
        cout << num << " Is NOT A Perfect Number" << endl;
}

int main() {
    cout<< "Perfect Number Checker\n";

    printResult(readPositiveNum("Enter A Number: "));


}
