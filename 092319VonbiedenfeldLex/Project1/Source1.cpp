/*
Programmer: Lex von Biedenfeld
Filename: Source1.cpp
Date: 9/23/19
Description: This program calculates player height from user input.
*/
#include <iostream>

int main() {
    /* Take user input as player's height in inches. Calculate and display the as follows:
        The player is <x> inches tall which is:
        <y> feet and <z> inches
    */
    const int INCHES_IN_FOOT{ 12 };
    int playerHeightInches{ 0 }, playerHeightFeet{ 0 }, playerHeightRemainder{ 0 };

    std::cout << "Enter the player's height in inches:  ";
    std::cin >> playerHeightInches;
    std::cout << std::endl;

    playerHeightFeet = { playerHeightInches / INCHES_IN_FOOT };
    playerHeightRemainder= { playerHeightInches % INCHES_IN_FOOT };

    //int p=std::cin.get();std::cout<<"The player is "<<p<<" inches tall which is:\n"<<p/12<<" feet and "<<p%12<<" inches\n";
    
    std::cout << "The player is " << playerHeightInches << " inches tall which is:" << std::endl;
    std::cout << '\t' << playerHeightFeet
        << ((playerHeightFeet != 1) ? " feet" : " foot")
        << " and " << playerHeightRemainder
        << ((playerHeightRemainder != 1) ? " inches" : " inch")
        << std::endl;

    return(0);
}

/* OUTPUT

*/