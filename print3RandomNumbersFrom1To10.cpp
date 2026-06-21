//
// Created by osama on 5/24/2026.
//

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;


int randomNumber(int from , int to) {
    int number = rand() % (to - from +1) + from;
    return number;
}

int main() {
    srand((unsigned) time(NULL));

    cout<< randomNumber(1, 10)<< endl;
    cout<< randomNumber(1 , 10)<< endl;
    cout<< randomNumber(1 , 10)<< endl;

}