//h
#include <string>
#include <vector>

using std::string;

class Tic_tac_toe
{
public:

	bool gameOver();
	void start_game(std::string first_player);
	void mark_board(int position);
	void displayBoard() const;

	string get_player() const { return player; }

private: //most logic goes within the private functions

	void set_next_player();
	bool checkBoardFull();
	void clearBoard();

	string player;
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