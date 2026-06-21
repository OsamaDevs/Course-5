//
// Created by osama on 5/24/2026.
//

#include <iostream>

using namespace std;


void printAllFromAAAtoZZZ() {

    for (int i = 65; i<=90; i++) {

        for (int j = 65; j<=90; j++) {

            for (int k = 65; k<=90; k++) {
                cout<< (char) i;
                cout<< (char) j;
                cout<< (char) k;
                cout<< '\n';
            }
        }
    }
}
int main() {
    printAllFromAAAtoZZZ();
}