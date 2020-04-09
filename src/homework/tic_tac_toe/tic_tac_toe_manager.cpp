#include "tic_tac_toe_manager.h"

//cpp
std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
	int x_win{ 0 }, o_win{ 0 }, ties{ 0 };
	for (auto game : manager.games)
	{
		out << game; //"DisplayBoard" function
		if (game.get_winner() == "X")
		{
			x_win++;
		}
		else if (game.get_winner() == "O")
		{
			o_win++;
		}
		else { ties++; }
	}
	out << "\nX wins: " << x_win << ", O wins: " << o_win << ", ties: " << ties << "\n";
	return out;
}

void TicTacToeManager::save_game(const Tic_tac_toe b)
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