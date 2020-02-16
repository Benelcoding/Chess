#include "Knight.h"

Knight::Knight() {}

Knight::Knight(int x, int y)
{
	Piece::Piece(x, y);
	symbol = '4';
}

int Knight::valid_move(int target_x, int target_y) {}