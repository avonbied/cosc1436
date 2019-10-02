/*
Programmer: Lex von Biedenfeld
Filename: Source.cpp
Date: 9/25/19
Description: This program demonstrates using cin for getting multiples values from user input.
*/
#include <iostream>
#include <string>

int main() {

    std::string lastName{ "" };
    char middleInitial{ ' ' };
    float height{ 0.0 };
    int weight{ 0 };

    std::cout << "Enter your last name, middle intial, height, and weight with blank spaces between values." << std::endl;

    // Example : vonBiedenfeld, G, 5.4, 117
    std::cin >> lastName >> middleInitial >> height >> weight;

    /* Example Output
    Name: vonBiedenfeld, G.
    Height: 5.4
    Weight: 117
    */
    std::cout << "\nName: " << lastName << ", " << middleInitial << '.' << std::endl;
    std::cout << "Height: " << height << " feet" << std::endl;
    std::cout << "Weight: " << weight << " lbs" << std::endl;

    return(0);
}

/* OUTPUT
Enter your last name, middle intial, height, and weight with blank spaces between values.
vonBiedenfeld G 5.4 117

Name: vonBiedenfeld, G.
Height: 5.4 feet
Weight: 117 lbs

C:\Users\lexvonbon\Projects\com.github\lexvonbon\cosc1436\092519VonbiedenfeldLex\Debug\092519VonbiedenfeldLex.exe (process 17448) exited with code 0.
Press any key to close this window . . .
*/