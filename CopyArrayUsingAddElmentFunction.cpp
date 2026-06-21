//
// Created by osama on 6/15/2026.
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

int generateRandom(int from , int to) {
    return (rand()% (to-from +1) + from);
}

void fillArrayWithRepeatedRandomNumbers(int array[], int arraySize) {
    for (int i = 0; i<arraySize; i++) {
        array[i] = generateRandom(1, 100);
    }
}

void addElementToArray(int array[] , int element ,int &arraySize) {
    array[arraySize] = element;
    arraySize++;
}

void copyDistinctNumbersToArray(int array1[], int array2[] , int array1Size, int &array2Size) {

    for (int i = 0; i< array1Size; i++ ) {
        addElementToArray(array2 , array1[i] , array2Size);
    }
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
    int array1Size = readPositiveNumber("Enter Array Size: ");
    int array2Size = 0;
    int array1[array1Size] , array2[array1Size];

    fillArrayWithRepeatedRandomNumbers(array1, array1Size);

    cout<< "Array 1: " << endl;
    printArray(array1 , array1Size);

    copyDistinctNumbersToArray(array1 , array2 , array1Size , array2Size);

    cout<< "Array 2 After Copying From Array 1: \n";
    printArray(array2 , array2Size);


}