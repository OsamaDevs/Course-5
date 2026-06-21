#include <iostream>
#include <string>
using namespace std;

int main() {
    int A, B;
    cin>> A >> B;

    int numOfLuky = 0 , LuckyPerNumber= 0;

    for (int i = A; i<= B; i++) {
        string s = to_string(i);
        bool isLucky = false;

        for (int j = 0; j < s.length(); j++) {
            if (s[j] != '7' && s[j] != '4') {
                break;
            }

            LuckyPerNumber ++;

            if (LuckyPerNumber == s.length()) {
                isLucky = true;
                numOfLuky++;
            }

            if (isLucky) {
                cout << i << " ";
            }

        }

        LuckyPerNumber = 0;


    }
    if (numOfLuky == 0)
        cout<< -1;
}