#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H

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
	if (checkCheckRowWin() == true || checkColumnWin() == true || checkDiagonalWin() == true)
	{
		return true;
	}
	else if (checkBoardFull() == true)
	{
		return true;
	}
	else if ((get_winner() != "X" && get_winner() != "O") && checkBoardFull() == true)
	{
		winner = "C";
		return true;
	}
	else
	{
		return false;
	}
}



//PRIVATE FUNCTIONS

void Tic_tac_toe::set_next_player()
{
	player = player == "X" ? "O" : "X"; //ternary for if player value is X it will set it to O, otherwise it will set it to X
}

bool Tic_tac_toe::checkColumnWin()
{
	if ((pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") || (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") || (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X"))
	{
		if (get_player() != "X")
		{
			setWinner();
			return true;
		}
	}
	else if ((pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") || (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O") || (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O"))
	{
		if (get_player() != "O")
		{
			setWinner();
			return true;
		}
	}
	return false;
}

bool Tic_tac_toe::checkCheckRowWin()
{
	if ((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") || (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") || (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X"))
	{
		if (get_player() != "X")
		{
			setWinner();
			return true;
		}
	}
	else if((pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") || (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") || (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"))
	{
		if (get_player() != "O")
		{
			setWinner();
			return true;
		}
	}
	return false;
}

bool Tic_tac_toe::checkDiagonalWin()
{
	if ((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") || (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X"))
	{
		if (get_player() != "X")
		{
			setWinner();
			return true;
		}
	}
	else if ((pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") || (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O"))
	{
		if (get_player() != "O")
		{
			setWinner();
			return true;
		}
	}
	return false;
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

void Tic_tac_toe::setWinner()
{

	winner = get_player() == "X" ? "O" : "X";

}

#endif