// version 1.0
// Mathew Garcia
// ITSE 1307
// Simple High Low Guessing Game

/*
	Pick a random number.
	Have the user guess the number.
	Display output based on users guess.
	Repeat asking for users guess until it is equal to random number.
	Display winning if user guessed random number.
	Askes user if they like to play again
	Keeps score of how many wins the player gets
*/

#include "pch.h"
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	srand(time(NULL)); //Get random time

	int intgameswon = 0;//set to 1 for the win counter

	playagain:int intLimit = 100; //Set limit for guess
	intgameswon++; //adds to the win counter

	int intGuess = rand() % intLimit + 1; //Give me a number between 0 and 51 then add 1.
	int intCurrentGuess = 1;
	int intguesses = 1;
	int intplayagain = 1;
	int intplay = 2;
	do { //Not equal to guess

		do { //User Input
			cout << "Please enter a number between 1 and " << intLimit << ": ";
			cin >> intCurrentGuess;
		} while (intCurrentGuess < 1 || intCurrentGuess > intLimit);

		if (intCurrentGuess > intGuess) {
			cout << "You guessed to high!" << endl;
			intguesses++;
		}
		else if (intCurrentGuess < intGuess) {
			cout << "You guessed to low!" << endl;
			intguesses++;
		}
		else {
			cout << "You guessed wisely! Congrats your score so far " << intgameswon << " Amount of guesses: " << intguesses << endl;
			cout << endl << endl << "do you wish to play again 1 to contine 2 to exit " << endl;
			cin >> intplayagain;
			if (intplayagain <= 1)
				goto playagain;
				continue;

		}	while (intCurrentGuess < 0 || intCurrentGuess > intLimit);

	} while (intCurrentGuess != intGuess);
		return 0;
}	