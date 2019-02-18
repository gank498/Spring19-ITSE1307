/*
	Mathew Garcia
	ITSE-1307
	Version 1.0

*/
#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;

/*
	made 3 sets of variabules for each coin 1 for value 1 for the actual coin and a 3rd for mutipling the values and actual coins
	then make output to prompt user to input which coin 
	take the user input for calculation
	then make the forumal for acutal coin and the value of the coins
	then output the user answer

*/
int main()
{
	double halfdoller_value(0.50);
	double quarter_value(0.25);
	double dime_value(0.10);
	double nickel_value(0.05);
	double pennies_value(0.01);

	int halfdoller;
	int quarter;
	int dime;
	int nickel;
	int pennies;
	int total;

	double halddoller_val;
	double quarter_val;
	double dime_val;
	double nickel_val;
	double pennies_val;
	double total_coins;

	cout << "please enter amount of penneys($0.01) ";
	cin >> pennies;
	cout << endl << "please enter amount of nickels($0.05 ";
	cin >> nickel;
	cout << endl << "please enter amount of Dimes($0.10) ";
	cin >> dime;
	cout << endl << "please enter amount of quarters($0.25) ";
	cin >> quarter;
	cout << endl << "please enter amount of halfdollers($0.50) ";
	cin >> halfdoller;
	
	total = pennies + dime + nickel + quarter + halfdoller;

	cout << fixed;

	pennies_val;
	total_coins =  (quarter_value * quarter) + (dime_value * dime) + (nickel_value * nickel) + (pennies_value * pennies) + (halfdoller_value * halfdoller);
	
	cout << endl << "number of halfdollers " << halfdoller;
	cout << endl << "Number of Quarters: " << quarter;
	cout << endl << "Number of Dimes: " << dime;
	cout << endl << "Number of Nickels: " << nickel;
	cout << endl << "Number of Pennies: " << pennies;
	
	cout << endl << endl << "Total Value of coins: " << total_coins;

	return 0;
}
