/*
Programmer: Lex von Biedenfeld
Filename: Source3.cpp
Date: 9/16/19
Description: This programs shows the usage of string datatype
*/
#include <iostream>
#include <string>

int main() {

    std::string middleInitial{ "" }; // 1 char length null: \0
    middleInitial = "'G'";
    std::cout << "My middle initial is: " << middleInitial << std::endl;

    std::string myName{ "' '" };
    myName = "'Lex von Biedenfeld'";
    std::cout << "My name is: " << myName << std::endl;

    std::cout << "Size of string: " << sizeof(std::string) << std::endl;
    std::cout << "Size of string: " << sizeof(myName) << std::endl;
    return(0);
}

/*
OUTPUT
*/