#include "Pawn.h"

Pawn::Pawn() {}

Pawn::Pawn(int x, int y)
{
	Piece::Piece(x, y);
	symbol = 'i';
}

int Pawn::valid_move(int target_x, int target_y) {}