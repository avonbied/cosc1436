/*
Programmer: Lex von Biedenfeld
Filename: source4.cpp
Date: 10/2/19
Description: This program takes a character from input and outputs the int value.
*/
#include <iostream>
#include <iomanip>
#include <string>

int main() {

	char input{ ' ' };

	std::cout << "Please enter a character: ";
	std::cin.get(input);

	std::cout << "The integer value of '" << input << "' is " << static_cast<int>(input) << std::endl;

	return(0);
}

/* OUTPUT
*/