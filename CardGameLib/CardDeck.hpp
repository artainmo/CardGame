#ifndef CARDDECK_HPP
#define CARDDECK_HPP

#include <iostream>
#include <string>
#include <vector>
#include <unistd.h>

#include "Card.hpp"

class CardDeck
{
protected:
	std::vector<Card> Cards;

	const Card &GetRandomCard();
	void AddCard(const Card &c);
	const std::string getCards();

public:
	CardDeck();
	virtual ~CardDeck();
	CardDeck(const CardDeck &to_copy);
	void operator=(const CardDeck &to_copy);
	const Card &operator[](int index);
	
	virtual void ShowCards() = 0;
	int size();
	void RemoveCard(const Card &c);
	void ReceiveCard(CardDeck &cd, int number = 1);
	void ReceiveCard(CardDeck &cd, const Card &c);
};

#endif
