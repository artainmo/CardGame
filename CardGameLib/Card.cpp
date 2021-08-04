#include "Card.hpp"

Card::Card(std::string n, std::string s)
{
	number = n;
	sign = s;
	if (sign == "Heart" || sign == "Diamond")
		color = "red";
	else
		color = "black";
}

Card::Card() { number = "blank"; sign = "blank"; color = "blank"; }

Card::~Card() {}

Card::Card(const Card &to_copy)
{
	*this = to_copy;
}

void Card::operator=(const Card &to_copy)
{
	number = to_copy.number;
	sign = to_copy.sign;
	color = to_copy.color;
}


bool Card::operator==(const Card &c)
{
	if (number == c.getNumber() and sign == c.getSign() and color == c.getColor())
		return true;
	else
		return false;
}

const std::string &Card::getNumber() const { return number; }

const std::string &Card::getSign() const { return sign; }

const std::string &Card::getColor() const { return color; }

const std::string Card::getCard() const { return (number + " " + sign);  }
