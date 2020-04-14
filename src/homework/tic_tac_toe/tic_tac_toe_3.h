//h
#ifndef TIC_TAC_TOE_3
#define TIC_TAC_TOE_3

#include "tic_tac_toe.h"

#include <iostream>

class tic_tac_toe_3 : public Tic_tac_toe 
{
public:

	tic_tac_toe_3() : Tic_tac_toe(3) {}//initializes the pegs to 9

	friend std::ostream& operator<<(std::ostream& out, const tic_tac_toe_3& t);
	friend std::istream& operator>>(std::istream& in, tic_tac_toe_3& b);

private:

	bool checkColumnWin();
	bool checkCheckRowWin();
	bool checkDiagonalWin();

};

#endif // !TIC_TAC_TOE_3

