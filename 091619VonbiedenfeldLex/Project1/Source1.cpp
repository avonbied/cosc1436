/*
Programmer: Lex von Biedenfeld
Filename: Source1.cpp
Date: 9/16/19
Description: This programs shows how to use float, double, and sizeof
*/
#include <iostream>

int main() {

    float myGpa{0.0};
    double distance{1234589123.1231231};

    myGpa = 3.5678999;
    std::cout << "My GPA is: " << myGpa << std::endl;
    std::cout << "Size of Float: " << sizeof(float) << std::endl;

    std::cout << "Distance = " << distance << std::endl;
    std::cout << "Size of Double: " << sizeof(double) << std::endl;
    return(0);
}

/*
OUTPUT
*/