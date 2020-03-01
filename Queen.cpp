#include "Queen.hpp"

Queen::Queen() {}

Queen::Queen(int x, int y,int p)
{
	Piece::init(x, y, p, QUEEN_SYMBOL);
}

int Queen::valid_move(int target_x, int target_y) {
	if (validinput(target_x, target_y)) {
		Rook r(pos.x, pos.y,-1);
		Bishop b(pos.x, pos.y, -1);
		return r.valid_move(target_x,target_y)||b.valid_move(target_x, target_y);
	}
	return 0;
}