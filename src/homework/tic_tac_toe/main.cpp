//#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"

#include <iostream>

using std::cout; using std::cin;

int main() 
{
	std::vector <std::reference_wrapper<Tic_tac_toe>> games;
	TicTacToeManager manager;

	string playerOption{ "" };

	bool isRunning{ true }, error{ true };
	int position{ 0 }, playerInt{ 0 };
	char option{ ' ' };



	//main loop
	while (isRunning)
	{

		cout << "Tic Tac Toe game 3 or 4: ";
		cin >> playerInt;

		if (playerInt == 3)
		{
			cout << "Executing tic tac toe 3";
			tic_tac_toe_3 game3;
			games.push_back(game3);
		}
		else if (playerInt == 4)
		{
			cout << "Executing tic tac toe 4";
			tic_tac_toe_4 game4;
			games.push_back(game4);
		}

		//allows for constant looping to get user to input X or O. So program wont blow up
		while (error)
		{
			cout << "Player 1, X or O: ";
			cin >> playerOption;
			try
			{
				games[games.size() - 1].get().start_game(playerOption); //the .get gets the stored reference
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
			cin >> games[games.size() - 1].get();
			cout << games[games.size() - 1].get();
		}

		catch(Error e)
		{
			cout << e.get_message();
		}

		if (games[games.size() - 1].get().gameOver() == false)
		{
			cout << "\nDo you want to continue(y/n): ";
			cin >> option;
			std::cout << "\n"; //to add a break in text

			isRunning = option == 'n' ? false : true;
		}
		else
		{
			manager.save_game(games[games.size() - 1].get());//saves game instance

			cout << "\nPlayer " << games[games.size() - 1].get().get_winner() << " has won the game!";

			cout << "\n\n" << manager; //displays board
			std::cout << "\nDo you want to play again(Y/n): ";
			cin >> option;
			std::cout << "\n"; //to add a break in text

			error = true; //allows for resetting of board

			isRunning = option == 'n' ? false : true;
		}
	}


	return 0;
}