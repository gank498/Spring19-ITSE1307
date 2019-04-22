#include "pch.h"
#include <iostream>
#include <iomanip>
#include "romanType.h" 

using namespace std;

void romanType::RomanTodecimal()
{
	char chra[1000];
	cout << "Enter the number in roman format(M-D-C-L-X-V-I) :";//Output
	cin >> chra;//Input
	int dec = 0;//variuable for decimal
	int	intlength = 0;//variuable for length
	int intnumber = 0;//variuable for number
	intlength = strlen(chra); //calucltes the length of char string
	for (int i = intlength - 1; i >= 0; i--) //roman to decimal
	{
		chra[i] = toupper(chra[i]);
		if (chra[i] == R[0])
			dec = 1000;
		else if (chra[i] == R[1])
			dec = 500;
		else if (chra[i] == R[2])
			dec = 100;
		else if (chra[i] == R[3])
			dec = 50;
		else if (chra[i] == R[4])
			dec = 10;
		else if (chra[i] == R[5])
			dec = 5;
		else if (chra[i] == R[6])
			dec = 1;

		else
		{
			decimal = -1;
			break;
		}
		if (intnumber > dec)
			decimal = (decimal - dec);
		else
			decimal = decimal + dec;
		intnumber = dec;
	}
}

int romanType::get_decimal() //function to return the decmial number
{
	return decimal;
}
romanType::romanType()//Constructor
{
	R[0] = 'M';
	R[1] = 'D';
	R[2] = 'C';
	R[3] = 'L';
	R[4] = 'X';
	R[5] = 'V';
	R[6] = 'I';

	decimal = 0;
}

bool romanType::operator>=(int n = 0)
{
	if (decimal >= 0)
		return 1;
	else
		return 0;
}