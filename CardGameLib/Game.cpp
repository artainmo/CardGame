#include "Game.hpp"

Game::Game() { SetPlayers(); }

Game::~Game() {}

void Game::SetPlayers()
{
	std::string ret;

	ret = "0";
	std::cout << "Players:"<< std::endl;
	while (ret.size() != 0)
    {
		std::getline(std::cin, ret);
		if (ret.size() != 0)
			Players.push_back(Player(ret));
    }
}

void Game::DistributeCards(bool all)
{
	int start_size = floor((float)CardGame1.size() / (float)Players.size());
	
	for (int i = 0; i != (int)Players.size(); i++)
		Players[i].ReceiveCard(CardGame1, start_size);
	while (all == true && CardGame1.size() && Players.size())
	{
		for (int i = 0; i != (int)Players.size() && CardGame1.size(); i++)
			Players[i].ReceiveCard(CardGame1, 1);
	}
}

void Game::ShowAll()
{
	std::cout << "\n";
	CardGame1.ShowCards();
	ShowPlayers();
}

void Game::ShowPlayers()
{
	for (int i = 0; i != (int)Players.size(); i++)
		Players[i].ShowCards();
}

void Game::ShowRanking()
{
	for (int i = 0; i < (int)ranking.size(); i++)
		std::cout << i + 1 << " place for "<< ranking[i].getName() << std::endl;
}

int Game::NumberPlayers() { return Players.size(); }

void Game::RemoveCard(const Card &c) { CardGame1.RemoveCard(c); }

void Game::RemoveSameNumberColor(Player &P)
{
	Card rem;

	for (int l = 0; l < P.size(); l++)
	{
		for (int m = 0; m < P.size(); m++)
		{
			if (l != m and P[l].getNumber() == P[m].getNumber() and
						P[l].getColor() == P[m].getColor())
			{
				rem = P[m];
				CardGame1.ReceiveCard(P, P[l]);
				CardGame1.ReceiveCard(P, rem);
				l = 0;
				m = 0;
			}
		}
	}
}


void Game::RemoveSameNumberColor()
{
	for (int i = 0; i < (int)Players.size(); i++)
		RemoveSameNumberColor(Players[i]);
}

void Game::TakeCardInCircleAndRemoveSameNumberColor()
{
	for (int i = 0; i < (int)Players.size() and Players.size() > 1; i++)
	{
		if (i != (int)Players.size() - 1)
		{
			Players[i + 1].ReceiveCard(Players[i]);
			RemoveSameNumberColor(Players[i + 1]);
			if (NoCardWin(Players[i]) == true)
				i--;
			if (NoCardWin(Players[i + 1]) == true)
				i--;
		}
		else
		{
			Players[0].ReceiveCard(Players[i]);
			RemoveSameNumberColor(Players[0]);
			if (NoCardWin(Players[i]) == true)
				i--;
			if (NoCardWin(Players[0]) == true)
				i--;
		}
	}
	if (Players.size() == 1)
	{ 
		ranking.push_back(*(Players.begin()));
		Players.erase(Players.begin()); 
	} 	
}

bool Game::NoCardWin(Player &P)
{
	std::vector<Player>::iterator i = Players.begin();

	if (P.size() != 0)
		return false;
	while (i != Players.end())
	{
		if (*i == P)
		{ 
			ranking.push_back(*i);
			Players.erase(i); 
			return true; 
		} 
		i++; 
	}	
	return false;
}
