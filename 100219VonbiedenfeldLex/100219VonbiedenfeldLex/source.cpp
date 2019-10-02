/*
Programmer: Lex von Biedenfeld
Filename: source.cpp
Date: 10/2/19
Description: This program calculates the average of 3 test scores from user input and displays it in a fixed precision of 2 decimal places.
*/
#include <iostream>
#include <iomanip>

const std::string BAR_LINE{ "\n========================\n" };
const int NUM_OF_TESTS{ 3 };

int main() {

	int score1{ 0 }, score2{ 0 }, score3{ 0 };
	float average{ 0.0 };

	std::cout << "Give 3 test scores as whole numbers separated by spaces (e.g. 80 90 75):  ";
	std::cin >> score1 >> score2 >> score3;


	average = (score1 + score2 + score3) / NUM_OF_TESTS;
	std::cout << "INT DIV WITH IMPLICITLY CASTED DIV RESULT" << std::endl;
	std::cout << "The original average of the 3 scores is " << std::fixed << std::setprecision(2) << average << BAR_LINE << std::endl;

	/* Casting Styles
	- C-Style : (type)value
	  (float)(score1 + score2 + score3) / NUM_OF_TESTS

	- C++-Style : static_cast<type>(value)
	  static_cast<float>(score1 + score2 + score3) / NUM_OF_TESTS
	*/
	average = static_cast<float>(score1 + score2 + score3) / NUM_OF_TESTS;
	std::cout << "FLOAT DIV WITH EXPLICITLY CASTED SCORE SUM" << std::endl;
	std::cout << "The original average of the 3 scores is " << std::fixed << std::setprecision(2) << average << BAR_LINE << std::endl;

	int bonus{ 0 };
	std::cout << "Enter bonus points:  ";
	std::cin >> bonus;

	average += bonus;

	std::cout << "The new average is " << average << std::endl;

	return(0);
}

/* OUTPUT
*/