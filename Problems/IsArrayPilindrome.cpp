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

int generateRandomNumbers(int from , int to) {
    return (rand() % (to-from + 1) + from);
}

void fillArrayWithPilindrome(bool isPilindrome,int array[], int arraySize) {
    int rand = 0;

    for (int i = 0; i<arraySize; i++) {
        rand = generateRandomNumbers(1 , 100);


                array[i] = rand;
            if (isPilindrome)
                array[arraySize-1-i] = rand;
            else
                array[arraySize-1-i] = rand+i;


    }

}


bool isArrayPilindrome(int array[] , int arraySize) {

    for (int i = 0; i< arraySize; i++) {

       if ( array[i] != array[arraySize-1-i])
            return false;
    }

    return true;
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
    int array1[array1Size];

    fillArrayWithPilindrome(true , array1, array1Size);


    cout<< "Array: " << endl;
    printArray(array1 , array1Size);

    if (isArrayPilindrome(array1, array1Size ))
        cout<< "Array Is Pillindrome\n";
    else
        cout<< "Array Is Not Pillindrome\n";


}