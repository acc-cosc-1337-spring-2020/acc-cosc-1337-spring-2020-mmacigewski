#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

#include <iostream>

using std::cout; using std::cin;

int main() 
{
	Tic_tac_toe game;
	TicTacToeManager manager;

	string playerOption{ "" };

	bool isRunning{ true }, error{ true };
	int position;
	char option{ ' ' };

	cout << "Player 1, X or O: ";

	//main loop
	while (isRunning)
	{
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

		try
		{
			cin >> game;
			cout << game;
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
			manager.save_game(game);
			cout << "\nPlayer " << game.get_winner() << " has won the game!";
			cout << "\n\n" << manager;
			std::cout << "\nDo you want to play again(Y/n): ";
			cin >> option;
			std::cout << "\n"; //to add a break in text


			isRunning = option == 'n' ? false : true;
		}
	}


	return 0;
}