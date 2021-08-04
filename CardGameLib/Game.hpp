#ifndef GAME_HPP
#define GAME_HPP

#include <cmath>

#include "Player.hpp"
#include "CardGame.hpp"

class Game
{
private:
	CardGame CardGame1;
	std::vector<Player> Players;
	std::vector<Player> ranking;

	void SetPlayers();
	void RemoveSameNumberColor(Player &P);
	bool NoCardWin(Player &P);

public:
	Game();
	~Game();

	void DistributeCards(bool all=true);
	void ShowAll();
	void ShowPlayers();
	void ShowRanking();
	int NumberPlayers();

	void RemoveCard(const Card &c);
	
	//JackTheSplade
	void RemoveSameNumberColor();
	void TakeCardInCircleAndRemoveSameNumberColor();
};

#endif
