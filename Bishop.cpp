#include "Bishop.hpp"

Bishop::Bishop() {}
Bishop::Bishop(int x, int y,int p)
{
	Piece::init(x, y, p, BISHOP_SYMBOL);
}

int Bishop::valid_move(int target_x, int target_y){
	if (!validinput(target_x, target_y)) {
		return 0;
	}
	return 1;
}