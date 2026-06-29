//
// Created by osama on 6/14/2026.
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

int generateRandomNumber(int from , int to) {
    return (rand() % (to - from + 1) + from);
}

void fillArrayWithRandomNumbers(int array[], int arraySize) {
    for (int i = 0; i< arraySize; i++) {
        array[i] = generateRandomNumber(0 , 100);
    }
}

void printArray(int array[], int arraySize) {
    cout << "[ ";

    for (int i = 0; i< arraySize; i++) {
        cout<< array[i]<< " ";
    }
    cout<< "] " << endl;
}

void copyReversedArray(int array[] , int reversedArray[], int arraySize) {

    for (int i = 0 ; i< arraySize; i++) {
        reversedArray[i] = array[arraySize-1-i];
    }

}

int main() {
    srand((unsigned) time(NULL));

    int size = readPositiveNumber("Enter Array Size: ");
    int array[size] , reversedArray[size];

    fillArrayWithRandomNumbers(array, size);

    copyReversedArray(array, reversedArray, size);

    cout<< "Original Array: \n";
    printArray(array, size);

    cout<< "Reversed Array: \n";
    printArray(reversedArray, size);


    return 0;
}