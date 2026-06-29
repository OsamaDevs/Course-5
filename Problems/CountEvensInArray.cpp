//
// Created by osama on 6/16/2026.
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

void fillArrayWithRandomNumbers(int array[], int arraySize) {
    for (int i = 0; i<arraySize; i++) {
        array[i] = generateRandom(1, 100);
    }
}

int countEvensInArray(int array[] , int arraySize) {
    int counter = 0;

    for (int i = 0; i< arraySize; i++) {

        if (array[i] % 2 == 0)
        {
            counter++;
        }

    }
    return counter;
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

    int arraySize = readPositiveNumber("Enter Array Size: ");
    int array[arraySize];

    fillArrayWithRandomNumbers(array ,arraySize);

    printArray(array , arraySize);

    int numberOfEvensInArray = countEvensInArray(array, arraySize);

    cout<< "Number Of Evens In Array Is: "<< numberOfEvensInArray << endl;

}