#pragma once

#include <string>
#include <vector>

using std::string;

class Tic_tac_toe
{
public:

	bool gameOver();
	void start_game(std::string first_player);
	void mark_board(int position);

	friend std::ostream& operator<<(std::ostream& out, const Tic_tac_toe& t);
	friend std::istream& operator>>(std::istream& in, Tic_tac_toe& b);

	string get_player() const { return player; }
	string get_winner() const { return winner; }



private: //most logic goes within the private functions

	bool checkColumnWin();
	bool checkCheckRowWin();
	bool checkDiagonalWin();
	bool checkBoardFull();

	void set_next_player();
	void clearBoard();
	void setWinner();

	string player;
	string winner;
	std::vector<string> pegs{ 9 , " " }; //initializes a vector of 9 elements with each being a space.

};

class Error
{
public:

	Error(string msg) : message(msg) {}
	
	string get_message() const { return message; }

private:

	string message;

};
