#include "Player.hpp"

Player::Player(const std::string &n) { name = n; }

Player::Player(const Player &to_copy) { *this = to_copy; }

void Player::operator=(const Player &to_copy) { name = to_copy.name; Cards = to_copy.Cards; }

const std::string &Player::getName() { return name; }

void Player::ShowCards() 
{ 
	std::cout << "\u001b[32m";
	std::cout << name << ":" << std::endl;
	std::cout << "\u001b[37m";
	std::cout << getCards() << "\n\n"; 
}

bool Player::operator==(const Player &P)
{
	if (name == P.name)
		return true;
	return false;
}
