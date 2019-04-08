/*
	Mathew Garica
	Version 1.0
	04/04/2019
	ITSE-1307
*/
#include "pch.h"
#include <iostream>
using namespace std;
/*
	This program prints out a chrismas tree with user input of height

*/
void printTree(int intpHeight) { //this fuction determines the tree height and width
	
	int intWidth = 1;
	for (int intRow = 1; intRow < intpHeight; intRow++) {//adds amount of rows needed
		for (int intSpaces = 1; intSpaces <= intpHeight - intRow; intSpaces++) {//adds the spacing needed from the border
			cout << " ";//output
		}
		for (int intColumn = 1; intColumn <= intWidth; intColumn++)//calucltes amount of columns needed by the width
		{
			cout << "*";//output
		}
		intWidth += 2;//adds 2 to the width
		cout << endl;//adds a spaceing
	}
	//this is the truck that gets added after the tree fuctions it adds the base
	for (int intSpaces = 1; intSpaces < intpHeight; intSpaces++) {
		cout << " ";//output
	}
	cout << "*" << endl;//output
}

int main()
{
	int intTreeHeight = 5;//gives the tree a base amount if nothing entered

	do {
		cout << "Enter the height of the tree you wish to print as an integer value: ";//output
		cin >> intTreeHeight;//input

		printTree(intTreeHeight);//calls fuction and fuaction algarothom

	} while (intTreeHeight != 0);

}
