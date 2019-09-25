/*
Programmer: Lex von Biedenfeld
Filename: Source2.cpp
Date: 9/4/19
Description: Using cout, endl, and escape chars (\n \t), this program prints
             the letter 'H' made out of '*'s
*/
#include <iostream>
#include <iomanip>

int main() {
    double price{ 95.0 };
    double countyTaxPercent{ 0.02 }, stateTaxPercent{ 0.04 };
    double totalTaxPercent = countyTaxPercent + stateTaxPercent;
    double totalTax = price * totalTaxPercent;

    std::cout << "The total sales tax is $" << std::setprecision(2) << std::fixed << totalTax << " on your purchase of $" << price << std::endl;
    return(0);
}
/* OUTPUT
*/