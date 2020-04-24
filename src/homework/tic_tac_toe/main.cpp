//#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"
#include "tic_tac_toe.h"
#include "tic_tac_toe_3.h"
#include "tic_tac_toe_4.h"


using std::cout; using std::cin;

int main() 
{
	std::vector<std::unique_ptr<Tic_tac_toe>> games;

	//std::unique_ptr<TicTacToeManager> manager = std::make_unique<TicTacToeManager>();
	std::unique_ptr<TicTacToeManager> manager;
	string playerOption{ "" };

	bool isRunning{ true }, error{ true };
	int position{ 0 }, playerInt{ 0 };
	char option{ ' ' };



	//main loop
	while (isRunning)
	{

		cout << "Tic Tac Toe game 3 or 4: ";
		cin >> playerInt;

		std::unique_ptr<Tic_tac_toe_3> game3 = std::make_unique<Tic_tac_toe_3>();
		std::unique_ptr<tic_tac_toe_4> game4 = std::make_unique<tic_tac_toe_4>();

		if (playerInt == 3)
		{
			games.push_back(std::move(game3)); //we gotta transfer ownership to the vector

		}
		else if (playerInt == 4)
		{
			games.push_back(std::move(game4));
		}


		//allows for constant looping to get user to input X or O. So program wont blow up
		while (error)
		{
			cout << "Player 1, X or O: ";
			cin >> playerOption;
			try
			{
				games[games.size() - 1]->start_game(playerOption); //the .get gets the stored reference
				error = false;
				cout << "\n"; //to add a break in the text
			}
			catch (Error e)
			{
				cout << e.get_message();
			}
		}

		do
		{
			try
			{
				cin >> *games[games.size() - 1];
				cout << *games[games.size() - 1];
			}

			catch (Error e)
			{
				cout << e.get_message();
			}
		} while (!games[games.size() - 1]->gameOver());

		if(games[games.size() - 1]->gameOver() == true)
		{
			manager->save_game(games[games.size() - 1]);//saves game instance, causes error that I canno't figure out

			cout << "\nPlayer " << games[games.size() - 1]->get_winner() << " has won the game!";

			cout << "\n\n" << *manager; //displays board
			std::cout << "\nDo you want to play again(Y/n): ";
			cin >> option;
			std::cout << "\n"; //to add a break in text

			error = true; //allows for resetting of board

			isRunning = option == 'n' ? false : true;
		}
	}

	if (isRunning == false)
	{
		cout << *manager;
	}


	return 0;
}