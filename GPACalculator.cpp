//
// Created by osama on 6/11/2026.
//

#include <iostream>
#include <string>
using namespace std;
enum enGrade {Aplus , A , Bplus, B, Cplus , C ,  Dplus, D, F , Invalid};

int readPositiveNumber(string message) {
    int number= 0;
    do {
        cout<< message;
        cin>> number;
    } while (number < 0 && number > 10);

    return number;

}
string readString(string message) {
    string String = " ";

        cout<< message;
        cin>> String;


    return String;
}

enGrade getGradeEnum(string grade) {

    if (grade == "A+") return enGrade::Aplus;
    if (grade == "A")  return enGrade::A;
    if (grade == "B+") return enGrade::Bplus;
    if (grade == "B")  return enGrade::B;
    if (grade == "C+") return enGrade::Cplus;
    if (grade == "C")  return enGrade::C;
    if (grade == "D+") return enGrade::Dplus;
    if (grade == "D")  return enGrade::D;
    if (grade == "F")  return enGrade::F;

    return enGrade::Invalid;

}

double getRatePerHour(enGrade grade) {

    switch (grade) {

        case (Aplus):
            return 5;
        case (A):
            return 4.75;
        case (Bplus):
            return 4.5;
        case (B):
            return 4;
        case (Cplus):
            return 3.5;
        case (C):
            return 3;
        case (Dplus):
            return 2.5;
        case (D):
            return 2;
        case (F):
            return 1;


    }

}

double calcPoints(enGrade grade, int numberOfCreditHours) {
    return getRatePerHour(grade)  * numberOfCreditHours;
}

double calculateGPA( int creditHours, double totalPoints) {
    return totalPoints / creditHours;
}



int main() {

    int numOfCourses = readPositiveNumber("Enter Number Of Courses: ");
    string coursesNames[numOfCourses];
    string grades[numOfCourses];
    int creditHours[numOfCourses];

    for (int i = 0; i<numOfCourses; i++) {
        coursesNames[i] = readString(R"(%i)", i);

    }


}