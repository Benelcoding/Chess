#include "Rook.hpp"
Rook::Rook() {}//default constructor.

Rook::Rook(int x, int y,int p)//constructs Rook.
{
	Piece::init(x, y, p,ROOK_SYMBOL);
}

int Rook::valid_move(int target_x, int target_y) { //Checks if the coordinated inputted are considered a valid move for the Rook.
	if ((target_x == get_x()) || (target_y == get_y())) {
		return 1;
	}
	return 0;
}