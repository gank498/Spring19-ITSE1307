/*
	Mathew Garia

*/
#include "pch.h"
#include <iostream>
#include <iomanip>
#include "romanType.h"

using namespace std;


int main()
{
	romanType ob; //creating the object
	ob.RomanTodecimal();


	if (ob >= 0)
		cout << "number total of romen Numeral : " << ob.get_decimal() << endl;//Output
	else
		cout << "error please enter the corresponding roman Numeral" << endl;//Output

}
