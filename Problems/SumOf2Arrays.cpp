//
// Created by osama on 5/25/2026.
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

int generateRandom(int from , int to) {
    return (rand() % (to-from +1) + from);
}
void fillArrayWithRepeatedRandomNumbers(int array[], int arraySize) {
    for (int i = 0; i< arraySize; i++ ) {
        array[i] = generateRandom(1 , 500);
    }
}

void printArray(int array[], int arraySize) {
    cout << "[ ";

    for (int i = 0; i< arraySize; i++) {
        cout<< array[i]<< " ";
    }
    cout<< "] " << endl;
}

void returnSumOfArrays(int array1[] , int array2[], int sumArray[], int arraySize) {
    for (int i = 0; i< arraySize; i++) {
        sumArray[i] = array1[i] + array2[i];
    }
}

int main() {
    srand((unsigned) time(NULL));
    int size = readPositiveNumber("Enter Array Size: ");
    int array1[size] , array2[size] , sumArray[size];

    fillArrayWithRepeatedRandomNumbers(array1 , size);
    fillArrayWithRepeatedRandomNumbers(array2, size);

    returnSumOfArrays(array1 , array2 , sumArray , size);

    cout<< "Array 1: "<< endl;
    printArray(array1, size);

    cout<< "Array 2: "<< endl;
    printArray(array2, size);

    cout<< "Sum Array: "<< endl;
    printArray(sumArray, size);



}
