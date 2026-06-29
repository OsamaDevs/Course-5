//
// Created by osama on 5/24/2026.
//

#include <iostream>
using namespace std;
int readNumber(string message) {
    int number=0;

    do
    {
        cout<< message;
        cin>> number;
    }
    while (number<0);

    return number;
}

void fillArrayWithUserInput(int array[] , int arraySize) {
    cout<< "Fill Array Elements: "<< '\n';
    for (int i = 0; i< arraySize ; i++) {
        cout<< "Enter Element [" << i+1 << "]";
        array[i] = readNumber(": ");
    }
}

void printArray(int array[], int arraySize) {
    for (int i = 0; i< arraySize; i++)
        cout<< array[i] << " ";

    cout<< '\n';
}

int findArrayElement(int array[] , int arraySize,int target) {
    int counter = 0;
    for (int i = 0; i< arraySize ; i++) {
        if (array[i] == target)
            counter++;
    }
    return counter;
}
int main() {

    int size = readNumber("Enter The Number Of Elements Of The Array: ");
    int array[size];
    fillArrayWithUserInput(array , size);
    int target = readNumber("Enter The Number You Want To Check: ");

    cout<< target << " is repeated "<< findArrayElement(array, size ,target) << " time(s) in the array\n";
    printArray(array , size);

}