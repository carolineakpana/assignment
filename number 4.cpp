* number1.cpp
* Name: [Idom Caroline Akpana]
* Department: [Computer science]
* Matric No: [46064038AD]
* A Program that reads an integer and determines and prints if its even or odd 
*
* Stub file to enable you complete assignment#1-question#1
*/
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int fivedigit;
	int first, second, third, fourth, fifth;
	
	cout << "enter the five digit integer: ";
	cin >> fivedigit;
	
	if(fivedigit < 10000)
	{
		cout << " Restructured to ";
	}
	
	if(fivedigit > 9999)
	{
		cout << "Restructured to ";
	}
	
	first = fivedigit/10000;
	second = (fivedigit/1000)%10;
	third = (fivedigit/100)%10;
	fourth = (fivedigit/10)%10;
	fifth = fivedigit%10;
	
	cout << first;
	cout << " " << second;
	cout << " " << third;
	cout << " " << fourth;
	cout << " " << fifth;
	
	return 0;
}
