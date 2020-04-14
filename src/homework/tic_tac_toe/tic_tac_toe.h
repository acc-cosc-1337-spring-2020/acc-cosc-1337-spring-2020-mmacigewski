#pragma once

#include <string>
#include <vector>


using std::string;

class Tic_tac_toe
{
public:

	Tic_tac_toe(int size) : pegs((size* size), "") {} //multiply 3 or 4 by itself for 9 or 16

	bool gameOver();
	void start_game(std::string first_player);
	void mark_board(int position);

	friend std::ostream& operator<<(std::ostream& out, const Tic_tac_toe& t);
	friend std::istream& operator>>(std::istream& in, Tic_tac_toe& b);

	string get_player() const { return player; }
	string get_winner() const { return winner; }

protected:

	std::vector<string> pegs{}; //initializes a vector of x elements with each being a space.
	virtual bool checkColumnWin();
	virtual bool checkCheckRowWin();
	virtual bool checkDiagonalWin();
	virtual void setWinner();


private: //most logic goes within the private functions


	bool checkBoardFull();
	void set_next_player();
	void clearBoard();


	string player;
	string winner;

};

class Error
{
public:

	Error(string msg) : message(msg) {}
	
	string get_message() const { return message; }

private:

	string message;

};

