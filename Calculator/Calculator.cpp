/*
	Mathew Garica
	2/21/2019
	ITSE - 1307
	Version 1.0

*/
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
/*
	create doubles for each variable and set them to 0 (doubles for decimel)
	Promte the user for each number in decimel

*/
int main()
{
	double C = 0;
	double A = 0;
	double B = 0;
	cout << "please enter a number (0.00) ";//output
	cin >> A;//input
	cout << endl << "please enter 2nd number(0.00) ";//output
	cin >> B;//input

	C = ((double)A * (double)B) / ((double)A - (double)B); //formula
	cout << fixed;
	cout << endl << setprecision(4) << "answer " << C << ""; //answer outpput

	return 0;

}
