#include "tic_tac_toe.h"
#include <iostream>

//cpp

void Tic_tac_toe::start_game(std::string first_player)
{
	if (first_player == "X" || first_player == "O")
	{
		player = first_player;
		clearBoard();
	}
	else { throw Error("Player must be X or O\n"); }
}

void Tic_tac_toe::mark_board(int position)
{
	if (position < 1 || position > 9)
	{
		throw Error("Position must be 1 to 9.\n");
	}
	else if (player == "")
	{
		throw Error("Must start game first.\n");
	} 
	else
	{ 
		pegs[position - 1] = player; //minus one for the index
		set_next_player(); 
	}
}

void Tic_tac_toe::displayBoard() const
{
	for (std::size_t i = 0; i < 9; i += 3) // += 3 for new row
	{
		std::cout << pegs[i] + " | " + pegs[i + 1] + " | " + pegs[i + 2] + "\n";
	}
}

bool Tic_tac_toe::gameOver()
{
	return checkBoardFull();
}



//PRIVATE FUNCTIONS

void Tic_tac_toe::set_next_player()
{
	player = player == "X" ? "O" : "X"; //ternary for if player value is X it will set it to O, otherwise it will set it to X
}

bool Tic_tac_toe::checkBoardFull() //checks board if its full, if there is a space it is not full.
{
	for (std::size_t i = 0; i < pegs.size(); ++i)
	{
		if (pegs[i] == " ")
		{
			return false;
		}
	}

	return true;
}

void Tic_tac_toe::clearBoard()
{
	for (auto &peg : pegs) //makes peg modifiable which is the element of pegs
	{
		peg = " ";
	}
}