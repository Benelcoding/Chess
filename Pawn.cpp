#ifndef PAWN_H_
#define PAWN_H_
#include "Pawn.h"
#endif 
Pawn::Pawn() {}

Pawn::Pawn(int x, int y,int p)
{
	Piece::Piece(x, y, p);
	symbol = 'i';
}

int Pawn::valid_move(int target_x, int target_y) {
	if (!validinput(target_x, target_y)) {
		return 0;
	}
	return 1;
}