#include "CardDeck.hpp"

CardDeck::CardDeck() {}

CardDeck::~CardDeck() {}

CardDeck::CardDeck(const CardDeck &to_copy) { *this = to_copy; }

void CardDeck::operator=(const CardDeck &to_copy) { Cards = to_copy.Cards; }

const Card &CardDeck::operator[](int index) { return Cards[index]; }
	
const Card &CardDeck::GetRandomCard()
{
	int random_num;

	usleep(100);
	srand(time(NULL)); //If srand not initialized, random name will always be the same
	random_num = rand() % Cards.size(); //In range 0-(Size-1)
	return Cards[random_num];
}

void CardDeck::AddCard(const Card &c) { Cards.push_back(c); }

void CardDeck::RemoveCard(const Card &c) 
{
	std::vector<Card>::iterator i = Cards.begin();


	while (i != Cards.end())
	{
		if (*i == c)
		{
			Cards.erase(i);
			return ;
		}
		i++;
	}
}

const std::string CardDeck::getCards()
{
	std::string ret;
	std::vector<Card>::iterator i = Cards.begin();

	ret = "| ";
	while (i != Cards.end())
	{
		if ((*i).getColor() == "red")
			ret += "\u001b[31m";
		else if ((*i).getCard() == "Jack Spade")
			ret += "\u001b[36;1m";
		else
			ret += "\u001b[36m";
		ret += (*i).getCard();
		ret += "\u001b[0m";
		ret += " | ";
		i++;
	}
	ret += "\u001b[35m";
 	ret += "\n" + std::to_string(size()) + " cards";
	ret += "\u001b[37m";
	return ret;
}

int CardDeck::size() { return Cards.size(); }

void CardDeck::ReceiveCard(CardDeck &cd, int number)
{
	Card c;

	while (number && cd.size())
	{
		c = cd.GetRandomCard();
		ReceiveCard(cd, c);
		number--;
	}
}

void CardDeck::ReceiveCard(CardDeck &cd, const Card &c)
{
	Card rem;

	rem = c;
	cd.RemoveCard(rem);
	AddCard(rem);
}
