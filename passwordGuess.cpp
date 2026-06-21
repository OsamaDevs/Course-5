// //
// // Created by osama on 5/24/2026.
// //
//
// #include <iostream>
// #include <string>
// using namespace std;
//
// string readPassword(string message) {
//     string password;
//     do {
//         cout<< message;
//         cin>> password;
//     } while (password.length() != 3);
//     return password;
// }
//
//
//
// bool passwordFound(string realPassword,string password ) {
//     return password.compare(realPassword) == 0;
// }
//
// void tryPasswords(string realPassword) {
//     string password = "";
//     int trial = 1;
//
//     for (int i = 65; i<=90; i++) {
//
//         for (int j= 65; j<=90; j++) {
//
//             for (int k= 65; k<=90; k++) {
//                 cout<< "Trial[" << trial << "]: ";
//                 password += (char) i;
//                 password += (char) j;
//                 password += (char) k;
//
//                 cout << password <<'\n';
//
//                 if (passwordFound(realPassword , password)) {
//                     cout<< "Found Password at trial: " << trial << " Which is: " << password << endl;
//                     return;
//                 }
//
//                 password = "";
//                     trial++;
//             }
//         }
//     }
//
// }
//
// int main() {
//     tryPasswords(readPassword("Enter A Password of 3 Letters: "));
// }
//

