#include <iostream>
#include <cmath>
using namespace std;
enum enPrime {Prime , notPrime};

int readNumber(string message) {
    int number = 0;
    do {
        cout << message;
        cin>> number;
    } while (number<0);

    return number;

}

enPrime checkPrime(int num) {

    int halfNum = round(num/2);

    for (int i = 2; i<= halfNum; i++) {
        if (num % i == 0)
            return enPrime::notPrime;
    }

    return enPrime::Prime;

}

void printPrimesToN(int N) {

    cout<< "Primes from 1 to " << N << " are: \n";


    for (int i = 1; i<= N; i++) {
        if (checkPrime(i) == enPrime::Prime)
            cout<< i << " ";
    }

    cout<< endl;
}

int main() {
    printPrimesToN(readNumber("Enter A Positive Number: "));

}