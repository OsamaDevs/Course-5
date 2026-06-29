//
// Created by osama on 5/27/2026.
//
#include <iostream>

using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout<< message ;
        cin>> number;
    } while (number<0);
    return number;
}

void fillArrayWithRepeatedRandomNumbers(int array[], int arraySize) {
    for (int i = 0; i< arraySize; i++) {
        array[i] = i+1;
    }
}

int generateRandomNumber(int from, int to) {
    return (rand() % (to - from + 1 ) + from);
}

void swap(int &firstNumber, int &secondNumber ) {

    int temp = 0;
    temp = firstNumber;
    firstNumber = secondNumber;
    secondNumber = temp;

}

void ShuffleArray(int array[] , int arraySize) {

    for (int i = 0; i<arraySize; i++) {
        //int randIndex1 = generateRandomNumber(0,arraySize-1);
        //int randIndex2 = generateRandomNumber(0,arraySize-1);
        swap(array[generateRandomNumber(0,arraySize-1)] , array[generateRandomNumber(0 , arraySize-1)]);
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

    int
    size = readPositiveNumber("Enter Size Of Array: "),
    array[size];


    fillArrayWithRepeatedRandomNumbers(array ,  size);
    printArray(array,size);

    ShuffleArray(array  , size);

    printArray(array , size);







}