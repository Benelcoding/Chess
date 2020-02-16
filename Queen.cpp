#include "Queen.h"

Queen::Queen() {}

Queen::Queen(int x, int y)
{
	Piece::Piece(x, y);
	symbol = 'Q';
}

int Queen::valid_move(int target_x, int target_y) {}