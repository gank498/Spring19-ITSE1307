/*
	Mathew Garcia
	Version 1.0
	ITSE - 1307
	04/03/2019
*/
#include "pch.h"
#include <iostream>
using namespace std;
/*
	This program takes in vowels and prints if true or not
	using a new fuction bool for true or false
*/

bool isVowel(char chrvowel); //fuction that will be called on

int main()
{
	char chrletter = 'a'; //create a new variable and initialize it with "a" 

	cout << "Enter a letter: ";//output
	cin >> chrletter; //user inputs the letter to be tested
	cout << isVowel(chrletter) << endl; //output if letter is vowel or not
}

bool isVowel(char chrletter)
{
	chrletter = tolower(chrletter);
	if (chrletter == 'a' || chrletter == 'e' || chrletter == 'i' || chrletter == 'o' || chrletter == 'u') {
		cout << "true ";//input
		return true; //returns 1 for true
	}
	cout << "False ";//output
	return false; //returns 0 for false
}