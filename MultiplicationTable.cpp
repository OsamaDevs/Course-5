#include <iostream>
using namespace std;

// My Method:

/*
void printFirstLineNumbers()
{
    cout<< '\t';

    for (int i = 1; i<=12; i++)
    {
        cout<< i << "\t";
    }
    cout<< '\n';
}

void printLine() {
//           1       2       3       4       5       6       7       8       9       10      11      12
    cout << "--------------------------------------------------------------------------------------------------\n";
}

void printTable() {
    int current = 1 ,  increment;

    for (int j = 1; j<=12; j++) {
        increment = j;
        cout << current << " |   " << '\t';

        for (int i = j; i<= increment*12; i+=increment)
        {
            if ( i <increment*12)
            cout<< i << "\t";
            if (i == increment*12)
                cout<< i;
        }

        cout<< '|' <<'\n';

        current++;
        increment++;

    }
    cout << "--------------------------------------------------------------------------------------------------" << endl;

}
int main() {
    int array[] = {1, 2, 3 , 4, 5, 6, 7, 8, 9, 10, 11, 12};

    printFirstLineNumbers();
    printLine();
    printTable();



}
*/

// After Seeing the Vid:

void printHeader() {
    cout<< "\n\n\t\t\t\t   Multiplication Table From 1 to 12\n\n\t";
    for (int i = 1; i<= 12; i++) {
        cout<< i << '\t';
    }
    cout << "\n__________________________________________________________________________________________________\n" ;
}

string CoulumnSpace(int i) {

    if (i<10)
        return "   |";
    else
        return "  |";

}

void printTable() {
    printHeader();

    for (int i = 1; i<= 12; i++) {

        cout<< i << CoulumnSpace(i) << '\t';

        for (int j = 1; j<= 12; j++)
            cout<< i * j << '\t';

        cout<< '\n';

    }
}

int main() {
    printTable();

}
