//
// Created by osama on 6/14/2026.
//

#include <iostream>
using namespace std;
enum enCharacterType {SmallLetter, CapitalLetter, SpecialCharacter, Digit };

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout<< message ;
        cin>> number;
    } while (number<0);
    return number;
}

int generateRandomNumber(int from, int to) {
    return (rand()% (to - from + 1) + from);
}

char generateRandomCharacter(enCharacterType charType) {

    switch (charType) {
        case(SmallLetter):
            return (char) generateRandomNumber(97, 122);

        case(CapitalLetter):
            return (char) generateRandomNumber(65, 90);

        case(SpecialCharacter):
            return (char) generateRandomNumber(33, 47);

        case(Digit):
            return (char) generateRandomNumber(48, 57);

        default:
            return ' ';
    }

}



string generateAtomicKey() {
    string atomicKey = "";

    for (int i = 0; i<5; i++) {
        atomicKey+= generateRandomCharacter(CapitalLetter);
    }

    return atomicKey;
}

string generateFullKey() {
    string fullKey = "";

    for (int i = 0; i< 5; i++) {
        fullKey += generateAtomicKey();

        if (i!=4)
            fullKey+= '-';
    }

    return fullKey;
}

void fillArrayWithKeys(string array[], int arraySize) {

    for (int i = 0; i< arraySize; i++)
        array[i] = generateFullKey();

}

void printArrayOfKeys(string array[], int arraySize) {
    cout<< "Array Elements: \n";

    for (int i = 0; i< arraySize; i++) {
        cout<<"Array[" << i <<"]: " << array[i] << "\n";
    }


}

int main() {
    srand((unsigned) time(NULL));

    int size = readPositiveNumber("Enter the number of key you want to generate: ");

    string array[size];

    fillArrayWithKeys(array, size);

    printArrayOfKeys(array, size);

}