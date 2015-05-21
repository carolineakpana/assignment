/*
* number1.cpp
* Name: [Idom Caroline Akpana]
* Department: [Computer science]
* Matric No: [46064038AD]
* A Program that reads an integer and determines and prints if its even or odd 
*
* Stub file to enable you complete assignment#1-question#1
*/
#include <iostream>

int main()
{
	int number1, number2;
	
	std::cout << "Enter integer: ";
	std::cin >> number1;
	
	number2 = number1 / 2;
	if (number1 % 2 == 0)
	
	std::cout << number1 << " is an even number";
	
	else
	std::cout << number1 << " is an odd number";
	
	return 0;
	
}
