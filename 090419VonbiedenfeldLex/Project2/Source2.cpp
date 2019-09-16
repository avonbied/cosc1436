/*
Programmer: Lex von Biedenfeld
Filename: Source2.cpp
Date: 9/4/19
Description: Using cout, endl, and escape chars (\n \t), this program prints
             the letter 'H' made out of '*'s
*/
#include <iostream>
using namespace std;

int main() {
    int numLines = 12;
    float legLength = numLines * 0.75 * 0.5;
    float bridgeLength = numLines * 0.25;
    for (int i = 1; i < numLines; i +=1) {
        if (i <= legLength || i > legLength+bridgeLength) {
            cout << "***"<< '\t' << "***" << endl;
        } else {
            cout << "***********\n";
        }
    }
    system("pause");
    return(0);
}
/* OUTPUT
***     ***
***     ***
***     ***
***     ***
***********
***********
***********
***     ***
***     ***
***     ***
***     ***
Press any key to continue . . .
*/