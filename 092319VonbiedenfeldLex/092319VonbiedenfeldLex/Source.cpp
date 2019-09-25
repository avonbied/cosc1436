/*
Programmer: Lex von Biedenfeld
Filename: Source.cpp
Date: 9/23/19
Description: This program shows operator precendence.
*/
#include <iostream>

int main() {

    /* Precendence chart
       =================
       0 | % * /
       1 | + -
    
    Ex.
    5+5-10*3 = ((5 + 5) - (10 * 3))

    5+2*3/3-4 = ((5 + ((2 * 3) / 3)) - 4)

    5 / 6 = 0           - Casts 0.833 to int via truncate (0. ~8333~) -> 0

    5 / 6.0 = 0.8333    - Performs float division and keeps decimal
    6 / 4 = 1           - (1.  ~5~) -> 1

    6 % 4 = 2           - Gives remainder of int division
    4 % 5 = 4           - Value of int division is 0, so (4 - 0) = 4
    4 % 6 = 4           - Same as above

    */

    /* Assign the value 79 as player's height in inches. Calculate and display the as follows:
        The player is <x> inches tall which is:
        <y> feet and <z> inches
    */

    //int p=79;std::cout<<"The player is "<<p<<" inches tall which is:\n"<<p/12<<" feet and "<<p%12<<" inches\n";

    const int INCHES_IN_FOOT{ 12 };
    int playerHeightInches{ 66 }, playerHeightFeet{ playerHeightInches / INCHES_IN_FOOT }, playerHeightRemainder{ playerHeightInches % INCHES_IN_FOOT };

    std::cout << "The player is " << playerHeightInches << " inches tall which is:" << std::endl;
    std::cout << playerHeightFeet << " feet and " << playerHeightRemainder << " inches" << std::endl;

    return(0);
}

/* OUTPUT

*/