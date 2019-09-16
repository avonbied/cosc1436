/*
TOP DOCUMENTATION
Programmer: Lex von Biedenfeld
Filename: Source3.cpp
Date: 9/11/19
Description: This program displays my age now and in n number of years
*/
#include <iostream>
#include <string>
using namespace std;

string ageAfter(int age, int years) {
    string message = "I ";


    message += " year";
    if (years != 1 || years != -1) {
        message += 's';
    }
    if (years < 0) {
        message += " ago";
    } else {
        if (years > 0) {
            message += " from";
        }
        message += " now";
    }
}

int main() {

    int myAgeInYears = 0;
    int years = 0;

    cout << "How old am I? ";
    cin >> myAgeInYears;
    cout << "How many years do you want me to age? ";
    cin >> years;



    if (years == 0) {
        message += "am ";
        message += to_string(myAgeInYears);
    }
    if (years > 0) {
        message += "will ";
        if (myAgeInYears + years < 0) {
            message += "not be ";
            message += "born yet";
        } else {
            message += "be ";
            message += to_string(myAgeInYears + years);
            message += " years old, ";
            message += to_string(years);

        }
    }
    if (years < 0) {
        message += "was ";
        if (myAgeInYears + years < 0) {
            message += "not born yet";
        } else {
            message += to_string(myAgeInYears + years);
            message += " years old, ";
            message += to_string(years);
        }
    }

    cout << message << endl;

    // I (am | will be | was) (#n years old | not born yet)
    // (now | , #m year({>|1|}s) (from now | ago))

    system("pause");
    return(0);
}

/*
OUTPUT
*/