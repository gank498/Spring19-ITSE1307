/*
	Mathew Garcia
	ITSE - 1307
	version 1.0
	3/18/2019

*/
#include "pch.h"
#include <iostream>
using namespace std;
/*
	programe convert number grade into letter grade
	initialize variables for each letter grade to the proper number equalvalent at there highest point
	output to tell the user to input grade in number
	take the input as a double then output the conversion using if statements
	using if statements for the input to be matched with the initialized variables 
*/
int main()
{
	int intswitchG = 0; //switch statment need to be a intager
	double dblgrade = 0; // double to count for user input at a double
	double dblgradeA = 89.5;
	double dblgradeB = 79.5;
	double dblgradeC = 74.5;
	double dblgradeD = 69.5;

	cout << "enter your grade(#): "; //output
	cin >> dblgrade; //input for the grade in double

	{
	if (dblgrade >= dblgradeA) //if statement for inout to be greater or equal to grade A
		cout << "The grade is A." << endl; //output

	else if (dblgrade >= dblgradeB) //else if statement for input
		cout << "The grade is B." << endl; //output

	else if (dblgrade >= dblgradeC) //else if statement for input
		cout << "The grade is C." << endl; //output

	else if (dblgrade >= dblgradeD) //else if statement for input
		cout << "The grade is D." << endl; //output

	else
		cout << "The grade is F." << endl; //else statment for all other values 
	}
	cout << endl;

	cout << "switch:" << endl;

	switch (intswitchG / 10) { //switch statment using case for each value
		case 9: case 10:
		cout << "A" << endl;
		break;

		case 8:
			cout << "B" << endl;
			break;
		case 7:
			cout << "C" << endl;
			break;
		case 6:
			cout << "D" << endl;
			break;
		default:
			cout << "F:";
	}
	return 0;
}
