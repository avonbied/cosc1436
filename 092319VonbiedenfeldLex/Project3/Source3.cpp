/*
Programmer: Lex von Biedenfeld
Filename: Source3.cpp
Date: 9/23/19
Description: This program calculates the total cost including tax of an item who's price is given by user input.
*/
#include <iostream>
#include <iomanip>

int main() {
    const double TAX_PERCENT{ 0.07 };
    double itemCost{ 0 }, totalCost{ 0 }, taxCost{ 0 };

    std::cout << "Enter the cost of the item you are purchasing:  ";
    std::cin >> itemCost;
    std::cout << std::endl;

    taxCost = itemCost * TAX_PERCENT;
    totalCost = itemCost + taxCost;

    std::cout << "Here is your bill:" << std::endl;
    std::cout << std::fixed << std::showpoint
        << std::left << std::setw(12) << "SUBTOTAL"
        << std::right << std::setw(8) << std::setprecision(2) << itemCost << "$\n"
        << std::left << std::setw(12) << "TAX AMOUNT"
        << std::right << std::setw(8) << std::setprecision(2) << taxCost << "$\n"
        << std::left << std::setw(12) << "======================" << '\n'
        << std::left << std::setw(12) << "TOTAL"
        << std::right << std::setw(8) << std::setprecision(2) << totalCost << '$'
        << std::endl;

    return(0);
}

/* OUTPUT
Enter the cost of the item you are purchasing:  43.25

Here is your bill:
SUBTOTAL       43.25$
TAX AMOUNT      3.03$
======================
TOTAL          46.28$

C:\Users\lexvonbon\Projects\com.github\lexvonbon\cosc1436\092319VonbiedenfeldLex\Debug\Project3.exe (process 23076) exited with code 0.
Press any key to close this window . . .
*/