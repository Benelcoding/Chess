#include "Bishop.h"

Bishop::Bishop() {}
Bishop::Bishop(int x, int y)
{
	Piece::Piece(x,y);
	symbol = '1';
}

int Bishop::valid_move(int target_x, int target_y) {}