#include "Pawn.hpp"

Pawn::Pawn() {}

Pawn::Pawn(int x, int y,int p)
{
	Piece::init(x, y, p, PAWN_SYMBOL);
}

int Pawn::valid_move(int target_x, int target_y) {
	if (!validinput(target_x, target_y)) {
		return 0;
	}
	return 1;
}