#include "Rook.h"

Rook::Rook() {}

Rook::Rook(int x, int y)
{
	Piece::Piece(x, y);
	symbol = 'U';
}

int Rook::valid_move(int target_x, int target_y) {}