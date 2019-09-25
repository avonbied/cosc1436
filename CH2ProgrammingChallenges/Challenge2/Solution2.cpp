/*
Programmer: Lex von Biedenfeld
Filename: Solution2.cpp
Date: 9/4/19
Description: Using cout, endl, and escape chars (\n \t), this program prints
             the letter 'H' made out of '*'s
*/
#include <iostream>

int main() {
    double percentOfSales{ 0.58 }, totalSales{ 8.6 }, salesValue{ 0.0 };
    salesValue = totalSales * percentOfSales;

    std::cout << "East Coast sales division generated $" << salesValue
        << " million out of the $" << totalSales << " milliion of sales company-wide." << std::endl;

    return(0);
}
/* OUTPUT
*/