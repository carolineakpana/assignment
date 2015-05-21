* number1.cpp
* Name: [Idom Caroline Akpana]
* Department: [Computer science]
* Matric No: [46064038AD]
* A Program that reads an integer and determines and prints if its even or odd 
*
* Stub file to enable you complete assignment#1-question#1
*/
#include <iostream>

using namespace std;

int main()
  {
 int number1, number2;

 cout << "Enter two integers: ";
 cin >> number1 >> number2;

 if ( number1 % number2 == 0 )
 cout << number1 << " is a multiple of " << number2 << endl;

 if ( number1 % number2 != 0 )
 cout << number1 << " is not a multiple of " << number2 << endl;

 return 0;
 }


