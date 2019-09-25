/*
Programmer: Lex von Biedenfeld
Filename: Source2.cpp
Date: 9/16/19
Description: This programs shows the usage of char datatype
*/
#include <iostream>

int main() {

    char myMiddleInitial{ ' ' };
    myMiddleInitial = 'G';
    std::cout << "My middle initial is: " << myMiddleInitial << std::endl;

    char myLetterGrade{ ' ' };
    myLetterGrade = 'A';
    std::cout << "My letter grade is: " << myLetterGrade << std::endl;

    std::cout << "Size of char: " << sizeof(char) << std::endl;
    return(0);
}

/*
OUTPUT
*/