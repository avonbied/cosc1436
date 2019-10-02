/*
Programmer: Lex von Biedenfeld
Filename: source3.cpp
Date: 10/2/19
Description: This program accumulates quarterly scores of a game and displays the running total after each quarter.
*/
#include <iostream>
#include <iomanip>
#include <string>

int main() {
	std::string input{ "" };
	int quarterScore{ 0 };
	int totalScore{ 0 };

	int currentQuarter{ 1 };

	bool doContinue{ true };

	do {
		std::cout << "Enter points earned in Quarter #" << currentQuarter << ": ";
		std::getline(std::cin, input);

		if (input.length() == 0 || input == "\n") {
			doContinue = false;
		}
		else {
			for (int i{ 0 }; i < input.length(); i += 1) {
				if (doContinue) {
					doContinue = std::isdigit(input[i]);
				}
			}
		}
		if (doContinue) {
			quarterScore = std::stoi(input);

			totalScore += quarterScore;
		
			std::cout << "TOTAL POINTS AFTER QUARTER #" << currentQuarter << " is " << totalScore << '\n' << std::endl;

			currentQuarter += 1;
		}
	} while (doContinue);


	// BASIC FORM
	quarterScore = totalScore = 0;
	currentQuarter = 1;

	std::cout << "Enter points earned in Quarter #" << currentQuarter << ": ";
	std::cin >> quarterScore;

	totalScore += quarterScore;
	std::cout << "TOTAL POINTS AFTER QUARTER #" << currentQuarter << " is " << totalScore << std::endl;
	currentQuarter += 1;

	std::cout << "Enter points earned in Quarter #" << currentQuarter << ": ";
	std::cin >> quarterScore;

	totalScore += quarterScore;
	std::cout << "TOTAL POINTS AFTER QUARTER #" << currentQuarter << " is " << totalScore << std::endl;
	currentQuarter += 1;

	std::cout << "Enter points earned in Quarter #" << currentQuarter << ": ";
	std::cin >> quarterScore;

	totalScore += quarterScore;
	std::cout << "TOTAL POINTS AFTER QUARTER #" << currentQuarter << " is " << totalScore << std::endl;
	currentQuarter += 1;

	std::cout << "Enter points earned in Quarter #" << currentQuarter << ": ";
	std::cin >> quarterScore;

	totalScore += quarterScore;
	std::cout << "TOTAL POINTS AFTER QUARTER #" << currentQuarter << " is " << totalScore << std::endl;
	currentQuarter += 1;

	std::cout << "Enter points earned in Quarter #" << currentQuarter << ": ";
	std::cin >> quarterScore;

	totalScore += quarterScore;
	std::cout << "TOTAL POINTS AFTER QUARTER #" << currentQuarter << " is " << totalScore << std::endl;
	currentQuarter += 1;

	return(0);
}

/* OUTPUT
*/