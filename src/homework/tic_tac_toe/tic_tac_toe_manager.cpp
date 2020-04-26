#include "tic_tac_toe_manager.h"

//cpp
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{

	for (auto& game : manager.games)
	{
		out << *game;
		
	}

	out << "\nX wins: " << manager.x_win << ", O wins: " << manager.o_win << ", ties: " << manager.ties << "\n";

	return out;
}


void TicTacToeManager::save_game(std::unique_ptr<Tic_tac_toe>& b)
{
	update_winner_count(b->get_winner());
	games.push_back(std::move(b)); //I think the error is here??
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