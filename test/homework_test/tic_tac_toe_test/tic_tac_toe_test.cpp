#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test game over")
{
	Tic_tac_toe game;

	game.start_game("O");

	REQUIRE(game.gameOver() == false);
}

TEST_CASE("Test set first player to X")
{
	Tic_tac_toe game;

	game.start_game("X");

	REQUIRE(game.get_player() == "X");
}

TEST_CASE("Test set first player to O")
{
	Tic_tac_toe game;

	game.start_game("O");

	REQUIRE(game.get_player() == "O");
}

TEST_CASE("Test Mark Position accepts values from 1 to 9 only")
{
	Tic_tac_toe game;

	game.start_game("X");

	REQUIRE_THROWS_AS(game.mark_board(0), Error);
	REQUIRE_THROWS_AS(game.mark_board(10), Error);
	game.mark_board(5);
}

TEST_CASE("Test game ends when board is full")
{
	Tic_tac_toe game;

	game.start_game("X");

	for (std::size_t i = 1; i < 9; ++i)
	{
		game.mark_board(i);
	}
	game.mark_board(9);
	REQUIRE(game.gameOver() == true);
}

TEST_CASE("Test win by first column", "[X wins first column]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	Tic_tac_toe board;
	board.start_game("X");
	REQUIRE(board.gameOver() == false);
	board.mark_board(1);//X        
	REQUIRE(board.gameOver() == false);
	board.mark_board(2);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(4);//X          
	REQUIRE(board.gameOver() == false);
	board.mark_board(5);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(7);//X
	//X wins
	REQUIRE(board.gameOver() == true);
}

TEST_CASE("Test win by first row", "[X wins first row]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	Tic_tac_toe board;
	board.start_game("X");
	REQUIRE(board.gameOver() == false);
	board.mark_board(1);//X        
	REQUIRE(board.gameOver() == false);
	board.mark_board(5);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(2);//X          
	REQUIRE(board.gameOver() == false);
	board.mark_board(4);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(3);//X
	//X wins
	REQUIRE(board.gameOver() == true);
}

TEST_CASE("Test win by second row", "[X wins second row]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	Tic_tac_toe board;
	board.start_game("X");
	REQUIRE(board.gameOver() == false);
	board.mark_board(4);//X        
	REQUIRE(board.gameOver() == false);
	board.mark_board(2);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(5);//X          
	REQUIRE(board.gameOver() == false);
	board.mark_board(7);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(6);//X
	//X wins
	REQUIRE(board.gameOver() == true);
}

TEST_CASE("Test win by third row", "[X wins third row]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	Tic_tac_toe board;
	board.start_game("X");
	REQUIRE(board.gameOver() == false);
	board.mark_board(7);//X        
	REQUIRE(board.gameOver() == false);
	board.mark_board(2);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(8);//X          
	REQUIRE(board.gameOver() == false);
	board.mark_board(3);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(9);//X
	//X wins
	REQUIRE(board.gameOver() == true);
}

TEST_CASE("Test win by diag top left", "[X wins first diag]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	Tic_tac_toe board;
	board.start_game("X");
	REQUIRE(board.gameOver() == false);
	board.mark_board(1);//X        
	REQUIRE(board.gameOver() == false);
	board.mark_board(3);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(5);//X          
	REQUIRE(board.gameOver() == false);
	board.mark_board(7);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(9);//X
	//X wins
	REQUIRE(board.gameOver() == true);
}

TEST_CASE("Test win by diag bottom left", "[X wins first diag]")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	Tic_tac_toe board;
	board.start_game("X");
	REQUIRE(board.gameOver() == false);
	board.mark_board(7);//X        
	REQUIRE(board.gameOver() == false);
	board.mark_board(6);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(5);//X          
	REQUIRE(board.gameOver() == false);
	board.mark_board(2);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(3);//X
	//X wins
	REQUIRE(board.gameOver() == true);
}

TEST_CASE("Test for no winner")
{ /* Tic Tac Toe Board
		123
		456
		789

	   First column win are user positions 1,4, and 7
vector view: 0, 3, and 6
	   */
	Tic_tac_toe board;
	board.start_game("X");
	REQUIRE(board.gameOver() == false);
	board.mark_board(2);//X        
	REQUIRE(board.gameOver() == false);
	board.mark_board(1);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(3);//X          
	REQUIRE(board.gameOver() == false);
	board.mark_board(6);//O          
	REQUIRE(board.gameOver() == false);
	board.mark_board(5);//X
	REQUIRE(board.gameOver() == true);
	board.mark_board(8);//X        
	REQUIRE(board.gameOver() == false);
	board.mark_board(9);//O
	REQUIRE(board.gameOver() == false);
	board.mark_board(7);//X        
	REQUIRE(board.gameOver() == false);
	board.mark_board(4);//O
	REQUIRE(board.gameOver() == true);
}