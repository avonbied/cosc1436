/*
Programmer: Lex von Biedenfeld
Filename: Source2.cpp
Date: 9/23/19
Description: This program calculates the number of cartons needed to carry a number of eggs given by user input.
*/
#include <iostream>

int main() {
    const int MAX_EGGS_IN_CARTON{ 6 };
    int numEggs{ 0 }, numCartons{ 0 }, numOfFullCartons{ 0 }, spacesAvailable{ 0 };

    std::cout << "Enter the eggs you have:  ";
    std::cin >> numEggs;
    std::cout << std::endl;

    numOfFullCartons = { numEggs / MAX_EGGS_IN_CARTON };
    spacesAvailable = { MAX_EGGS_IN_CARTON - (numEggs % MAX_EGGS_IN_CARTON) };
    numCartons = (spacesAvailable > 0) ? numOfFullCartons + 1 : numOfFullCartons;

    std::cout << "You have " << numEggs << " eggs." << std::endl;
    std::cout << "You need: "
        << numCartons << " carton" << ((numCartons != 1) ? "s" : "")
        << "\nand you will have " << spacesAvailable << " free space"
        << ((spacesAvailable != 1) ? "s" : "")
        << " available." << std::endl;

    return(0);
}

/* OUTPUT
Enter the eggs you have:  16

You have 16 eggs.
You need: 3 cartons
and you will have 2 free spaces available.

C:\Users\lexvonbon\Projects\com.github\lexvonbon\cosc1436\092319VonbiedenfeldLex\Debug\Project2.exe (process 37080) exited with code 0.
Press any key to close this window . . .

*/