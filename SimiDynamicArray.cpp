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

void addElementToArray(int array[] , int element ,int &arraySize) {
    array[arraySize]= element;
    arraySize++;
}

void printArray(int array[], int arraySize) {

    cout<< "Array Elements: \n"<<"[ " ;

    for (int i = 0; i<arraySize; i++) {
        cout<< array[i] << " ";
    }
    cout<< "] " << endl;

}

void ExtendArray(int array[], int &arraySize) {
    bool addMore = true;
    int element;

    do {
        element = readPositiveNumber("Enter Element You Want To Add: ");
        addElementToArray(array , element, arraySize);

        cout<< "Do You Want To Add More Elements Into The Array? [0]No [1]Yes: ";
        cin>> addMore;

    } while (addMore);
}

int main(){
    int array[100], arraySize = 0;

    ExtendArray(array , arraySize);

    cout<< "Array Length: " << arraySize << '\n';

    printArray(array, arraySize);
}