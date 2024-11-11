// lesson1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

void print_name(const char* name_to_print) {
	std::cout << name_to_print << std::endl;
}

int main()
{
	int an_integer_variable = 1;

	if (an_integer_variable % 2 == 0) {
		std::cout << "a value of an_integer_variable is even" << std::endl;
	}
	else {
		std::cout << "a value of an_integer_variable is odd" << std::endl;
	}

	if (an_integer_variable == 1) {
		std::cout << "an_integer_variable is equal to 1" << std::endl;
	}
	for (int i = 0; i < 10; i = i + 1) {
		std::cout << i << std::endl;
	}
	print_name("bob");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file