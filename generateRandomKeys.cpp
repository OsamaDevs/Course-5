// //
// // Created by osama on 5/24/2026.
// //
//
#include <iostream>
using namespace std;

int readNumOfKeys(string message) {
    int number;
    do {
        cout<< message;
        cin>> number;
    } while (number<0);

    return number;
}

int returnRandomNumber(int from, int to) {
    int number = rand() % (to - from +1) + from;
    return number;
}


string generateAtomicKey() {
    string s = "";
    for (int i = 0; i<4; i++) {
        s+= returnRandomNumber(65, 90);
    }
    return s;
}

string generateKey() {
    string fullKey = "";

    for (int i = 0; i<4; i++) {
        fullKey+= generateAtomicKey();
        if (i!=3)
        fullKey+= "-";
    }

    return fullKey;

}

void generateMultipleKeys(int numOfKeys) {
    for (int i = 1; i<= numOfKeys; i++) {
        cout<< "Key Numer [" << i << "]: ";
        cout<< generateKey() << '\n';
    }
}

int main() {
    srand((unsigned) time(NULL));

    generateMultipleKeys(readNumOfKeys("Enter The Desiered Number Of Keys: "));

}

