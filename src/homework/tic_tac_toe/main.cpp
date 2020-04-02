#include "tic_tac_toe.h"

#include <iostream>

using std::cout; using std::cin;

int main() 
{
	string playerOption{ "" };
	bool isRunning{ true }, error{ true };
	int position;
	char option{ ' ' };
	Tic_tac_toe game;

	cout << "Player 1, X or O: ";

	//allows for constant looping to get user to input X or O. So program wont blow up
	while (error)
	{
		cin >> playerOption;
		try
		{
			game.start_game(playerOption);
			error = false;
			cout << "\n"; //to add a break in the text
		}
		catch (Error e)
		{
			cout << e.get_message();
		}
	}

	//main loop
	while (game.gameOver() == false && isRunning)
	{
		try
		{
			cout << "Player " <<game.get_player() << " enter a position: ";
			cin >> position;
			cout << "\n";

			game.mark_board(position);
			game.displayBoard();
		}

		catch(Error e)
		{
			cout << e.get_message();
		}

		if (game.gameOver() == false)
		{
			cout << "\nDo you want to continue(y/n): ";
			cin >> option;
			std::cout << "\n"; //to add a break in text

			isRunning = option == 'n' ? false : true;
		}
		else
		{
			cout << "\nPlayer " << game.get_winner() << " has won the game!";
			isRunning = false;
		}
	}


	return 0;
}