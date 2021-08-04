#ifndef CARD_HPP
#define CARD_HPP

#include <iostream>
#include <string>
#include <vector>

class Card
{
private:
	std::string number;
	std::string sign;
	std::string color;

public:
	Card(std::string n, std::string s);
	Card();
	~Card();
	Card(const Card &to_copy);
	void operator=(const Card &to_copy);
	bool operator==(const Card &c);

	const std::string &getNumber() const;
	const std::string &getSign() const;
	const std::string &getColor() const;
	const std::string getCard() const;
};

#endif
