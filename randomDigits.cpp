//
// Created by osama on 5/24/2026.
//

#include <iostream>
#include <cstdlib>

using namespace std;

// char returnRandomDigit(int from , int to) {
//     char charachter = (char) (rand() % (to - from +1) + from);
//     return charachter;
// }
//
// int main() {
//     srand((unsigned)time(NULL));
//
//     cout<< returnRandomDigit(97 , 122) << '\n';
//     cout<< returnRandomDigit(65 ,90 ) << '\n';
//     cout<< returnRandomDigit(33 ,47 ) << '\n';
//     cout<< returnRandomDigit(48 ,57 ) << '\n';
//
// }

enum enCharchterType
{
    smallLetter = 1,
    capitalLetter = 2,
    specialCharachter = 3,
    number = 4
};


int returnRandomNumber(int from, int to) {
    int number = rand() % (to - from +1) + from;
    return number;
}

char getChar(enCharchterType charType) {
    switch (charType) {
        case(smallLetter):
        return (char) returnRandomNumber(97 , 122);

        case(capitalLetter):
            return (char) returnRandomNumber(65 ,90 );

        case(specialCharachter):
            return (char) returnRandomNumber(33 ,47  );

        case(number):
            return (char) returnRandomNumber(48 ,57  );

        default:  return '\0';

    }

}




int main() {
    srand((unsigned) time(NULL));

    cout<< getChar(smallLetter) << '\n';
    cout<< getChar(capitalLetter) << '\n';
    cout<< getChar(specialCharachter) << '\n';
    cout<< getChar(number) << '\n';


}