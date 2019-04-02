/*
	Mathew Garcia
	3/31/2019
	version 1.0


*/

#include "pch.h"
#include <iostream>
using namespace std;
/*
	this program out puts all prime numbers bewteen 1 and 10,000

*/
bool isPrime(int intValue) { //use bool to make isPrime test for true or false for all prime numbers test against the value
}

int main()
{
	int intNumber = 0;

	for (int intRange = 1; intRange <= 10000; intRange++) { //this sets the range to test prime numbers in this case we tested 1 - 10,000 add a +1 counter for variable 
		intNumber = intRange; //use the +1 variable to give the number variable a int number

		if (isPrime(intNumber)) { //if bool fines a prime number
			cout << ", " << intNumber; // add a comma to seperte each number for read ability 
		}
	}

}
