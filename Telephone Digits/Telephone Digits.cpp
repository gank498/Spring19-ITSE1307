/*
	Mathew Garcia
	3/28/2019
	Version 1.0
	ITSE-1307

*/

#include "pch.h"
#include <iostream>

using namespace std;
/*
	this program takes in letters and turns them into telephone digits

*/
int main()
{
	char chrletter = 'A'; //char with a initialized variable this will be used to determine using input
	int intanswer = 0; //tried to output in one line didnt get it to work

	cout << " Please Enter a letter: "; //output
	cin >> chrletter; //input



	while (chrletter != '#') //a while loop to continue to accept letters untill stopped with #
	{
		cout << endl << "The letters you entered is: " << chrletter << ": "; //output

		if ((chrletter >= 'A' && chrletter <= 'Z') || (chrletter >= 'a' && chrletter <= 'z') || (chrletter >= '1' && chrletter <= '9'))//If statement for each case for lower and upper case and number

			switch (chrletter)//switch statment
			{
			case 'A':
			case 'B':
			case 'C':
			case 'a':
			case 'b':
			case 'c':
			case '2':
				cout << 2 << endl; //output
				break;
			case 'D':
			case 'E':
			case 'F':
			case 'd':
			case 'e':
			case 'f':
			case '3':
				cout << 3 << endl; //output
				break;
			case 'G':
			case 'H':
			case 'I':
			case 'g':
			case 'h':
			case 'i':
			case '4':
				cout << 4 << endl; //output
				break;
			case 'J':
			case 'K':
			case 'L':
			case 'j':
			case 'k':
			case 'l':
			case '5':
				cout << 5 << endl; //output
				break;
			case 'M':
			case 'N':
			case 'O':
			case 'm':
			case 'n':
			case 'o':
			case '6':
				cout << 6 << endl; //output
				break;
			case 'P':
			case 'Q':
			case 'R':
			case 'S':
			case 'p':
			case 'q':
			case 'r':
			case 's':
			case '7':
				cout << 7 << endl; //output
				break;
			case 'T':
			case 'U':
			case 'V':
			case 't':
			case 'u':
			case 'v':
			case '8':
				cout << 8 << endl; //output
				break;
			case 'W':
			case 'X':
			case 'Y':
			case 'Z':
			case 'w':
			case 'x':
			case 'y':
			case 'z':
			case '9':
				cout << 9 << endl; //output
			}


		else //catchs user errors if inputing anything not a number or letter
			cout << endl << "Invalid input."; //output error
			cout << endl << "To stop the program enter #." << endl;//output command to stop the program
			cout << "Enter a letter: "; //output
			cin >> chrletter; //input for the next number or letter
			cout << endl; //output a space between previoius statment
	}//end while

	return 0;
}
