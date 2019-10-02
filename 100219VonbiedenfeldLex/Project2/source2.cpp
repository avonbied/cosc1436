/*
Programmer: Lex von Biedenfeld
Filename: source2.cpp
Date: 10/2/19
Description: This program calculates how many videos per month on average need to be watched,
			 in order for a target number of videos per video, taken from user input, can be reached.
*/
#include <iostream>
#include <iomanip>
#include <string>

const std::string barPrinter(int length, char sym='=') {
	std::string output{ "\n" };
	for (int i = 0; i < length; i += 1) {
		output += sym;
	}
	return(output + '\n');
}

const int MONTHS_IN_YEAR { 12 };

int main() {
	int videosInYear{ 0 };

	std::cout << "Enter the number of videos you plan to watch: ";
	std::cin >> videosInYear;

	float videosPerMonth{ 0.0 };
	videosPerMonth = static_cast<float>(videosInYear) / MONTHS_IN_YEAR;

	std::cout << std::fixed << std::setprecision(2);
	std::string output{ "\nThe numbers of videos you will be able to watch per month is " };
	std::cout << output << videosPerMonth;

	int barLength = output.length() + std::to_string(videosPerMonth).length();
	std::cout << barPrinter(barLength);

	std::cout << std::endl;

	return(0);
}

/* OUTPUT
*/