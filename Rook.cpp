#ifndef ROOK_H_
#define ROOK_H_
#include "Rook.h"
#endif 
Rook::Rook() {}

Rook::Rook(int x, int y,int p)
{
	Piece::Piece(x, y, p);
	symbol = 'U';
}

int Rook::valid_move(int target_x, int target_y) {
	if (!validinput(target_x, target_y)) {
		return 0;
	}
	return 1;
}