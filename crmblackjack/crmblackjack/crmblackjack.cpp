// crmblackjack.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <time.h>
#include <vector>
#include "Card.h"
#include "Deck.h"
#include "Player.h"
#include "crmblackjack.h"
using namespace std;

int main()
{
	srand((int)time(NULL));

	Player objDealer;
	Player objPlayer;
	Player objsetmoney;
	Player objinputPlayerBet;
	Deck objDeck = Deck(4);
	int intplayagain = 0;
	//cout << objCard.toString() << endl;
	objDealer.setPlayerName("Dealer");
	objPlayer.setPlayerName("Player 1");
	cout << objDealer.toString() << endl;
	cout << objPlayer.toString() << endl;
	cout << objPlayer.toString() << endl;
	tryagain:objPlayer.inputPlayerBet();
	
	objDeck.shuffle();

	for (int intFirstTwoCards = 1; intFirstTwoCards <= 2; intFirstTwoCards++) {
		objDealer.addCard(objDeck.getCard());
		objPlayer.addCard(objDeck.getCard());
	}

	//Should add some logic to prevent adding more cards that needed
	while (objDealer.getHandPointValue() <= 16) {
		objDealer.addCard(objDeck.getCard());
	}

	cout << objDealer.toString() << endl;
	cout << objPlayer.toString() << endl;

	if (objDeck.shouldShuffle()) {
		objDeck.shuffle();
	}

	if (objDealer.getHandPointValue() >= objPlayer.getHandPointValue()) {
		cout << "dealer Wins";
		objsetmoney =  objinputPlayerBet - objsetmoney;//subtracts the players money they lost in the bet
		cout << objsetmoney.toString() << endl;
	}
	else
	{
		cout << "Player Wins";
		objsetmoney = objinputPlayerBet + objsetmoney;//adds the players winnings to the players setmoney
		cout << objsetmoney.toString() << endl;
	}
	if (intplayagain == 0)//adds option for player to deiced to keep going with the same amount of money
	{
		cout << "contiune? enter 1 " << endl;
		cout << "quit enter 2 " << endl;
		cin >> intplayagain;
	}while (intplayagain = 0)

		if (intplayagain == 1)
		{
			goto tryagain;
		}
		else
		{
			continue;
		}

    return 0;
}

