//
// Created by osama on 6/14/2026.
//

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

int searchForNumberInArray(int array[] , int arraySize ,int targetNumber) {

    for (int i = 0; i< arraySize; i++) {
        if (array[i] == targetNumber )
            return i;
    }

    return -1;
}

void printSearchResult(int targetNumber, int index) {
    cout<< "The Number You Are Looking For is " << targetNumber << endl;

    if (index == -1)
        cout<< targetNumber << " is not found in the array!\n";
    else {
        cout<< targetNumber << " is found at index: " << index << endl;
        cout<< "It's Position in Array is: " << index+1 << endl;
    }

}

int main() {

    srand((unsigned) time(NULL));

    int size = readPositiveNumber("Enter Array Size: ");
    int array[size];


    fillArrayWithRepeatedRandomNumbers(array , size);

    printArray(array, size);


    int targetNumber = readPositiveNumber("Enter The Number To Search For Inside The Array: ");

    int indexOfSearchedNumber = searchForNumberInArray(array, size, targetNumber);

    printSearchResult(targetNumber , indexOfSearchedNumber);


}