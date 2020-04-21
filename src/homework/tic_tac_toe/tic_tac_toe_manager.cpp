#include "tic_tac_toe_manager.h"

//cpp
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{

	for (auto game : manager.games)
	{
		out << game;
		
	}

	out << "\nX wins: " << manager.x_win << ", O wins: " << manager.o_win << ", ties: " << manager.ties << "\n";

	return out;
}

void TicTacToeManager::save_game(Tic_tac_toe b)
{
	games.push_back(b);
	update_winner_count(b.get_winner());
}

void TicTacToeManager::update_winner_count(std::string winner)
{
	if (winner == "X")
	{
		x_win++;
	}
	else if (winner == "O")
	{
		o_win++;
	}
	else { ties++; }
}