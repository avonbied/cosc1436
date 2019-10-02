/*
Programmer: Lex von Biedenfeld
Filename: source1.cpp
Date: 10/2/19
Description: This program converts a Celsius temp taken from user input to a Farenheit temp and displays it as a float up to 3 decimals.
*/
#include <iostream>
#include <iomanip>

const std::string BAR_LINE{ "\n=========================================\n" };
const float F2C_RATIO{ (float)9 / float(5) }; // Better : 1.8

int main() {
	int tempC{ 0 };
	float tempF{ 0.0 };

	std::cout << "Enter a temperature in Celcius: ";
	std::cin >> tempC;

	tempF = static_cast<float>(tempC) * F2C_RATIO + 32;

	std::cout << std::fixed << std::setprecision(3);
	std::cout << "\nTemperature in Farenheit is " << tempF << BAR_LINE << std::endl;

	return(0);
}

/* OUTPUT
*/