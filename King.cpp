#include "King.h"

King::King() {}

King::King(int x, int y)
{
	Piece::Piece(x, y);
	symbol = 'K';
}

int King::valid_move(int target_x, int target_y) {}