#include "tic_tac_toe_3.h"

/*
class function check_column_win
Win by column if and return true if
0,3, and 6 are equal
1, 4, and 7
2, 5, and 8
else
false
*/

bool tic_tac_toe_3::checkColumnWin()
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

/*
class function check_row_win
Win by row if
0, 1, 2 are equal
3,4,5 are equal
6,7,8 are equal
*/

bool tic_tac_toe_3::checkCheckRowWin()
{
	if ((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") || (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") || (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X"))
	{
		if (get_player() != "X")
		{
			setWinner();
			return true;
		}
	}
	else if ((pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") || (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") || (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"))
	{
		if (get_player() != "O")
		{
			setWinner();
			return true;
		}
	}
	return false;
}

/*
class function check_diagonal_win
Win diagonally
0 1 2
3 4 5
6 7 8

*/

bool tic_tac_toe_3::checkDiagonalWin()
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

std::ostream& operator<<(std::ostream& out, const tic_tac_toe_3& b)
{
	std::cout << "\n"; //formatting purposes
	for (std::size_t i = 0; i < 9; i += 3) // += 3 for new row
	{
		out << b.pegs[i] + " | " + b.pegs[i + 1] + " | " + b.pegs[i + 2] + "\n";
	}
	return out;
}

std::istream& operator>>(std::istream& in, tic_tac_toe_3& b)
{
	int pos{ 0 };
	std::cout << "Player " << b.get_player() << " enter a position: ";
	in >> pos;
	b.mark_board(pos);

	return in;
}