/*
	Mathew Garcia
	version 1.0
	04/03/2019
	ITSE - 1307
*/
#include "pch.h"
#include <iostream>
using namespace std;
/*
	This program checks if a string is palindrome a word that can be read foward and backwards

*/
void check(char[], int);

void check(char word[], int index)
{
	int intlength = strlen(word) - (index + 1); //gets the length of the word and turns it into a int

	if (word[index] == word[intlength])
	{
		if (index + 1 == intlength || index == intlength)
		{
			cout << "this word is palindrome";//output
			return;
		}
		check(word, index + 1);
	}
	else
	{
		cout << "this is not a palindrome word";//output
	}
}

int main()
{
	char chrword[15];//new variable  

	cout << "Enter a word to check if it is a palindrome" << endl; //output
	cin >> chrword; //input
	check(chrword, 0);//calls fuction

	return 0;
}
