#ifndef TIC_TAC_TOE_MANAGER_H
#define TIC_TAC_TOE_MANAGER_H

#include "tic_tac_toe.h"

#include <vector>
#include <string>
#include <iostream>

class TicTacToeManager
{
public:

	void save_game(const Tic_tac_toe b);

	friend std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager);

private:

	std::vector<Tic_tac_toe> games;

	int x_win{ 0 };
	int o_win{ 0 };
	int ties{ 0 };

	void update_winner_count(std::string winner);

};


#endif // ! TIC_TAC_TOE_MANAGER_H
