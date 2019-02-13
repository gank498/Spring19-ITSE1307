/*
	Mathew Garcia
	2/11/2019
	version 1.0
	ITSE-1307
*/

#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;
/*
 Program converts miles to kilometers
  formula for miles to KM is KM = miles * 1.609344

*/
int main()
{
	int intmiles = 0;
	double dbleKM = 0;
	double dblebase = 1.609344;

	cout << "please enter the miles "; //output to user
	cin >> intmiles; //input from user in miles

	dbleKM = (double)intmiles * (double)dblebase; //actual formula for conversion

	cout << fixed;
	cout << endl << setw(6) << setfill('$') << intmiles << "M is " << setprecision(3) << dbleKM << " in KM";

	//cout << endl << dbleKM << " KM"; //output users answer in decimel

	return 0;
}