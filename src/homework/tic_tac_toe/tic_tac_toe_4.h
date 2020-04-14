//h
#ifndef TIC_TAC_TOE_4
#define TIC_TAC_TOE_4

#include "tic_tac_toe.h"

#include <iostream>

class tic_tac_toe_4 : public Tic_tac_toe
{

public:

	tic_tac_toe_4() : Tic_tac_toe(4) {}

	friend std::ostream& operator<<(std::ostream& out, const tic_tac_toe_4& t);
	friend std::istream& operator>>(std::istream& in, tic_tac_toe_4& b);

private:

	bool checkColumnWin();
	bool checkCheckRowWin();
	bool checkDiagonalWin();

};


#endif // !TIC_TAC_TOE_4
