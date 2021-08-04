#ifndef CARDGAME_HPP
#define CARDGAME_HPP

#include <iostream>
#include <string>
#include <vector>

#include "CardDeck.hpp"

class CardGame: public CardDeck
{
public:
	CardGame();
	~CardGame();
	CardGame(const CardGame &c);
	void operator=(const CardGame &c);

	void ShowCards();
};

#endif
