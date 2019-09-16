/*
Programmer: Lex von Biedenfeld
Filename: Source.cpp
Date: 9/4/2019
Description: This program counts to 20
*/
#include <iostream>
using namespace std;

int main() {
    cout << "Let's count to 20!" << endl;
    for (int num = 1; num < 21; num += 1) {
        cout << num;
        if (num != 20) {
            cout << ", ";
        }
    }
    cout << endl;
    system("pause");
    return(0);
}
/* OUTPUT
Let's count to 20!
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20
Press any key to continue . . .
*/