#include "tic_tac_toe.h"

//cpp

void Tic_tac_toe::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
	}
	else { throw Error("Player must be X or O"); }
}

void Tic_tac_toe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw Error("Position must be 1 to 9.");
	}
	else if (player == "")
	{
		throw Error("Must start game first.");
	} 
	else { set_next_player(); }
}

void Tic_tac_toe::set_next_player()
{
	player = "X" ? "O" : "X"; //ternary for if player value is X it will set it to O, otherwise it will set it to X
}
