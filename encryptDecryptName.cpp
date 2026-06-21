// //
// // Created by osama on 5/24/2026.
// //
//
// #include <iostream>
// using namespace std;
//
// string readName(string message) {
//     string name = "";
//
//     cout<< message;
//     cin>> name;
//
//     return name;
// }
//
// string encryptName(string name , int encryptionKey) {
//     string encryptedName = "";
//
//     for (int i = 0; i<name.length(); i++) {
//         encryptedName += (char) ((int) name[i] + encryptionKey);
//     }
//
//     return encryptedName;
// }
//
// string decryptName(string name , int encryptionKey) {
//     string decryptedName = "";
//
//     for (int i = 0; i<name.length(); i++) {
//         decryptedName += (char) ((int) name[i] - encryptionKey);
//     }
//
//     return decryptedName ;
// }
//
// void printResult(string name , int encryptionKey) {
//     cout<< "Original Name: " << name << '\n';
//     cout<< "Encrypted Name: " << encryptName(name , encryptionKey) << '\n';
//     cout<< "Decrypted Name: " << decryptName(encryptName(name , encryptionKey) , encryptionKey) << '\n';
// }
//
// int main() {
//     printResult(readName("Enter A Name To Encrypt: ") , 4 );
// }


#include <iostream>
using namespace std;

string readText(string message) {
    string text = "";
    cout<< message;
    cin>> text;
    return text;
}

string encryptText(string name , int encryptionKey) {

    for (int i = 0; i<name.length(); i++) {
        name[i] = (char) ((int) name[i] + encryptionKey);
    }

    return name;
}

string decryptText(string name , int encryptionKey) {

    for (int i = 0; i<name.length(); i++) {
        name[i] = (char) ((int) name[i] - encryptionKey);
    }

    return name ;
}

void printResult(string Text , string encrypted , string decrypted) {
        cout<< "Original Name: " << Text << '\n';
        cout<< "Encrypted Name: " << encrypted << '\n';
        cout<< "Decrypted Name: " << decrypted << '\n';
    }

int main() {
    const int ENCRYPTION_KEY = 5;

    string Text = readText("Enter A Text To Encrypt: ");
    string encryptedText = encryptText(Text , ENCRYPTION_KEY);
    string decryptedText = decryptText(encryptedText , ENCRYPTION_KEY);

    printResult(Text , encryptedText , decryptedText);

}