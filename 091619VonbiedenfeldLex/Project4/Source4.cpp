/*
Programmer: Lex von Biedenfeld
Filename: Source4.cpp
Date: 9/16/19
Description: This programs shows the usage of bool datatype
*/
#include <iostream>

int main() {

    bool passedOrFailed{ false }; // false: 0x0, true: 0x1

    passedOrFailed = true;
    std::cout << "Did I pass or Fail? " << passedOrFailed << std::endl;

    passedOrFailed = false;
    std::cout << "Did I pass or Fail? " << passedOrFailed << std::endl;

    std::cout << "Size of bool: " << sizeof(bool) << std::endl;
    return(0);
}

/*
OUTPUT
*/