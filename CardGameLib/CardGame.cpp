#include "CardGame.hpp"

CardGame::CardGame()
{
	AddCard(Card("2", "Club"));
	AddCard(Card("2", "Diamond"));
	AddCard(Card("2", "Heart"));
	AddCard(Card("2", "Spade"));
	AddCard(Card("3", "Club"));
	AddCard(Card("3", "Diamond"));
	AddCard(Card("3", "Heart"));
	AddCard(Card("3", "Spade"));
	AddCard(Card("4", "Club"));
	AddCard(Card("4", "Diamond"));
	AddCard(Card("4", "Heart"));
	AddCard(Card("4", "Spade"));
	AddCard(Card("5", "Club"));
	AddCard(Card("5", "Diamond"));
	AddCard(Card("5", "Heart"));
	AddCard(Card("5", "Spade"));
	AddCard(Card("6", "Club"));
	AddCard(Card("6", "Diamond"));
	AddCard(Card("6", "Heart"));
	AddCard(Card("6", "Spade"));
	AddCard(Card("7", "Club"));
	AddCard(Card("7", "Diamond"));
	AddCard(Card("7", "Heart"));
	AddCard(Card("7", "Spade"));
	AddCard(Card("8", "Club"));
	AddCard(Card("8", "Diamond"));
	AddCard(Card("8", "Heart"));
	AddCard(Card("8", "Spade"));
	AddCard(Card("9", "Club"));
	AddCard(Card("9", "Diamond"));
	AddCard(Card("9", "Heart"));
	AddCard(Card("9", "Spade"));
	AddCard(Card("10", "Club"));
	AddCard(Card("10", "Diamond"));
	AddCard(Card("10", "Heart"));
	AddCard(Card("10", "Spade"));
	AddCard(Card("Jack", "Club"));
	AddCard(Card("Jack", "Diamond"));
	AddCard(Card("Jack", "Heart"));
	AddCard(Card("Jack", "Spade"));
	AddCard(Card("Queen", "Club"));
	AddCard(Card("Queen", "Diamond"));
	AddCard(Card("Queen", "Heart"));
	AddCard(Card("Queen", "Spade"));
	AddCard(Card("King", "Club"));
	AddCard(Card("King", "Diamond"));
	AddCard(Card("King", "Heart"));
	AddCard(Card("King", "Spade"));
	AddCard(Card("Ace", "Club"));
	AddCard(Card("Ace", "Diamond"));
	AddCard(Card("Ace", "Heart"));
	AddCard(Card("Ace", "Spade"));
}

CardGame::~CardGame() {}

CardGame::CardGame(const CardGame &c) { *this = c; }

void CardGame::operator=(const CardGame &c) { Cards = c.Cards; }

void CardGame::ShowCards() 
{ 
	std::cout << "\u001b[33m";
	std::cout << "CARD GAME:" <<  std::endl;
	std::cout << "\u001b[37m";
	std::cout << getCards() << "\n\n"; 
}
