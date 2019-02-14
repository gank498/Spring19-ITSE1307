/*
	Mathew Garcia
	2/12/2019
	version 1.0
	ITSE-1307
*/
#include "pch.h"
#include <iostream>
#include <iomanip>

using namespace std;
/*
	program calcultes the pythagoren throrem C side
	insinaliz varubles for A side B side and C side
	then put in outputs that prompts user for there quation
	then create the formual in proper order
	then output the asnwer of C side while displaying there input

*/

int main()
{
	int intA = 0;
	int intB = 0;
	double dblC = 0;

	cout << "please enter A side ";
	cin >> intA; //input
	cout << endl << "now enter B side ";
	cin >> intB; //input

	intA = (double)intA * (double)intA; //formual for A²
	intB = (double)intB * (double)intB; // formual for B²
	dblC = (double)intA + (double)intB; // add both A and B² to get the C²

	cout << fixed;
	cout << endl  << "C side is " << setw(9) << setfill('*') << setprecision(3) << intA << " + " << intB << " = " << dblC << ""; // useing precision to control the amount of decimals 

	return 0;
}
