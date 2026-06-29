//
// Created by osama on 5/25/2026.
//

//
// Created by osama on 5/25/2026.
//

#include <iostream>
#include <cmath>
using namespace std;
enum enPrime {NotPrime = 0, Prime = 1};

int readPositiveNumber(string message) {
    int number = 0;

    do {
        cout<< message;
        cin>> number;
    }while (number<0);

    return number;
}

int generateRandom(int from , int to) {
    return (rand()% (to-from +1) + from);
}

void fillArrayWithRandomNumbers(int array[], int arraySize) {
    for (int i = 0; i<arraySize; i++) {
        array[i] = generateRandom(1, 100);
    }
}
enPrime isPrime(int number) {


    for (int i = 2; i <= round(number/2); i++) {
        if (number % i == 0)
            return NotPrime;
    }

    return Prime;
}

void copyArrayPrimes(int array1[], int array2[] , int array1Size , int &array2Size) {
    int counter = 0;

    for (int i = 0; i< array1Size; i++) {
        if ( isPrime(array1[i])== enPrime::Prime) {
            array2[counter] = array1[i];
            counter++;
        }

    }
    array2Size = --counter;
}

void printArray(int array[], int arraySize) {
    cout << "[ ";

    for (int i = 0; i< arraySize; i++) {
        cout<< array[i]<< " ";
    }
    cout<< "] " << endl;
}


int main() {
    srand((unsigned) time(NULL));
    int size = readPositiveNumber("Enter Array Size: ");
    int array1[100] , array2[100];

    fillArrayWithRandomNumbers(array1, size);

    cout<< "Array 1: " << endl;
    printArray(array1 , size);
    int array2Size = 0;
    copyArrayPrimes(array1 , array2 , size, array2Size);

    cout<< "Array 2 After Copying From Array 1: \n";
    printArray(array2 , array2Size);


}