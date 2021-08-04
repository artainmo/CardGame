#include "../CardGameLib/Game.hpp"

int main()
{
	system("clear");
	Game JackTheSplade;
	int rounds;
	std::string input;

	rounds = 1;
	JackTheSplade.RemoveCard(Card("Jack", "Club"));
	system("clear");
	JackTheSplade.ShowAll();
	std::cin.get();
	JackTheSplade.DistributeCards();
	system("clear");
	std::cout << "Card distribution"<< std::endl;
	JackTheSplade.ShowAll();
	std::cin.get();
	JackTheSplade.RemoveSameNumberColor();
	system("clear");
	std::cout << "Post Pair Cleaning"<< std::endl;
	JackTheSplade.ShowAll();
	while (JackTheSplade.NumberPlayers())
	{
		std::cin.get();
		system("clear");
		std::cout <<" **** Round: " << rounds << " ****"<< std::endl;
		JackTheSplade.TakeCardInCircleAndRemoveSameNumberColor();
		JackTheSplade.ShowPlayers();
		rounds++;

	}
	JackTheSplade.ShowRanking();
}
