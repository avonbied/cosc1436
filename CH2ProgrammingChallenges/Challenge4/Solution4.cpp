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
    double mealCharge{ 88.67 }, tax{ 0.0675 }, tip{ 0.2 };
    double total = mealCharge * (1 + tip + tax);
        
    std::cout << "YOUR RESTARAUNT BILL" << std::endl;

    std::cout << std::setw(20) << std::setprecision(2) << std::fixed;
    std::cout << "Subtotal: " << mealCharge << std::endl;
    std::cout << "Sales Tax: " << tax * mealCharge << std::endl;
    std::cout << "Tip: " << tip * mealCharge << std::endl;
    
    std::cout << "================" << std::endl;
    std::cout << "Total: " << total << std::endl;
    return(0);
}
/* OUTPUT
*/