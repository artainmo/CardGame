#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <iostream>
#include <string>
#include <vector>

#include "CardDeck.hpp"

class Player: public CardDeck
{
private:
	std::string name;

public:
	Player(const std::string &n);
	Player(const Player &to_copy);
	void operator=(const Player &to_copy);
	bool operator==(const Player &P);

	const std::string &getName();
	void ShowCards();
};

#endif
