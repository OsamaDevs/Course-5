//
// Created by osama on 5/25/2026.
//

#include <iostream>
#include <cmath>
using namespace std;

int readPositiveNumber(string message) {
    int number = 0;

    do {
        cout<< message;
        cin>> number;
    } while (number<0);

    return number;
}

int generateRandomNumbers(int from , int to) {
    return (rand() % (to-from + 1) + from);
}

void fillArrayWithRepeatedRandomNumbers(int array[], int arraySize) {
    for (int i = 0; i<arraySize; i++) {
        array[i] = generateRandomNumbers(1,100);
    }
}

void printArray(int array[], int arraySize) {

    cout<< "Array Elements: \n"<<"[ " ;
    for (int i = 0; i<arraySize; i++) {
        cout<< array[i] << " ";
    }
    cout<< "] " << endl;
}

int getSumOfArrayNumbers(int array[] , int arraySize) {
    int maximum = array[0];
    for (int i = 0; i<arraySize ; i++) {
        if (array[i] > maximum)
            maximum = array[i];
    }

    return maximum;

}

int main() {


    srand((unsigned) time(NULL));
    int size = readPositiveNumber("Enter Array Size: ");
    int array[size];

    while (size>0) {
        int array[size];
        fillArrayWithRepeatedRandomNumbers(array , size);

        printArray(array, size);

        cout<< "Max Number In Array: " << getSumOfArrayNumbers(array, size) << endl;
        size = readPositiveNumber("Enter Array Size: ");
    }

}