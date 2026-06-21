//
// Created by osama on 6/14/2026.
//


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

bool searchForNumberInArray(int array[] , int arraySize ,int targetNumber) {

    for (int i = 0; i< arraySize; i++) {
        if (array[i] == targetNumber )
            return true;
    }

    return false;
}

void printSearchResult(int targetNumber, bool NumberFound) {
    cout<< "The Number You Are Looking For is " << targetNumber << endl;

    if (NumberFound == false)
        cout<< targetNumber << " is not found in the array!\n";
    else {
        cout<< targetNumber << " is found in the array!" << endl;

    }

}

int main() {

    srand((unsigned) time(NULL));

    int size = readPositiveNumber("Enter Array Size: ");
    int array[size];


    fillArrayWithRepeatedRandomNumbers(array , size);

    printArray(array, size);


    int targetNumber = readPositiveNumber("Enter The Number To Search For Inside The Array: ");

    bool isFoundInArray = searchForNumberInArray(array, size, targetNumber);

    printSearchResult(targetNumber , isFoundInArray);


}