# include <iostream>

using namespace std;

int readPositiveNumber(string message) {
    int number = 0;
    do {
        cout<< message;
        cin>> number;
    }while (number<0);

    return number;
}
int numberOfDigits(int number) {
    return to_string(number).length();
}

int reverseNumber(int number) {

    int remainder = 0;
    int reversedNumber = 0;

    while (number>0) {
        remainder = number % 10;
        number /= 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    return reversedNumber;
}

int main() {
    cout<< reverseNumber( readPositiveNumber("Enter Number: ")) << "\n";



}