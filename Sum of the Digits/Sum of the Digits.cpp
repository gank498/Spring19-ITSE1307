/*
	Mathew Garica
	ITSY - 1307
	Version 1.0

*/
#include "pch.h"
#include <iostream>
#include <cmath>
#include <string.h>
using namespace std;

/*
	takes two numbers and splits the digits individually
	take the two individual digits and adds em together
	out put the user with both answers
*/
int main()
{
	int intnum1 = 0;
	int intnum2 = 0;
	int sum = 0;
	int intdivide = 0;
	int digits = 0;
	int count = 0;

	cout << "Please enter number: "; //output
	cin >> intnum1; //input

	intnum2 = intnum1;

	// Counting the number of digits in the entered integer
	while (intnum2 != 0) //while statement that looking for 0
	{
		intnum2 = intnum2 / 10; // divids the number by 10 untill 0
		count++; // adds 1 to the counter 
	}

	intnum2 = intnum1;

	// Extracting the digits
	cout << endl << "Individual digits in the entered number are ";//output
	do
	{
		intdivide = static_cast<int>(pow(10.0, --count));
		digits = intnum2 / intdivide;
		intnum2 = intnum2 % intdivide;

		cout << " " << digits;
		sum = sum + digits;
	} while (count != 0);

	cout << endl << "Sum of the digits is = " << sum << "";
	return 0;
}