
#include <iostream>
using namespace std;

int readPositiveNumber(string message) {
    int number =0;

    do {
        cout<< message;
        cin>> number;

    }while (number<0);
    return number;
}

int digitFrequency(short digit , int number) {
    int remainder = 0, frequency = 0;

    while (number>0) {
        remainder = number %10;
        number /= 10;

        if (digit == remainder)
        frequency++;
    }
    return frequency;
}

void printAllDigitFreq(int number) {
    int frequency = 0;

    for (int i = 0; i<=9; i++) {
        frequency = digitFrequency(i, number);

        if (frequency > 0)
            cout<< "The Digit " << i << " Was Repeated " << frequency << " Time/s In: " << number << endl;
    }


}

int main() {
    int number =  readPositiveNumber("Enter The Main Number: " );

    printAllDigitFreq(number);

    return 0;
}


