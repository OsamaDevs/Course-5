//
// Created by osama on 4/5/2026.
//

#include <iostream>

using namespace std;

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

    for (int i = 1; i<= num; i++) {
        if (isPerfectNumber(i))
            cout << i << " Is A Perfect Number" << '\n';
    }
}

int main() {
    cout<< "Perfect Number Checker\n";

    printResult(readPositiveNum("Enter A Number: "));


}
