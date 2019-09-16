/*
TOP DOCUMENTATION
Programmer: Lex von Biedenfeld
Filename: Source.cpp
Date: 9/11/19
Description: This program shows the usage of: endl, \n (esc sequence), cout;
             and how to use and declare variables: indentifiers, data types, operators. 
*/
#include <iostream>
using namespace std;

void printHellos(int num) {
    if (num > 0) {
        for (int i = 0; i < num; i += 1) {
            if (i != 0) {
                cout << "\n" << endl;
            }
            cout << "Hello World" << endl;
        }
    }
}

int main() {
    /*cout << "Hello World" << endl << endl << endl;
    cout << "Hello World" << endl;*/

    int numHellos;
    cout << "How many hellos do you want? ";
    cin >> numHellos;

    printHellos(numHellos);
    system("pause");
    return(0);
}

/* If 0:
OUTPUT
How many hellos do you want? 0
Press any key to continue . . .
*/
/* If 1:
OUTPUT
How many hellos do you want? 1
Hello World
Press any key to continue . . .
*/
/* If > 1:
OUTPUT
How many hellos do you want? //#n
Hello World


Hello World //2
...

Hello World //#n
Press any key to continue . . .
*/