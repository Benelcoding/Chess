#include "Knight.hpp"

Knight::Knight() {}

Knight::Knight(int x, int y,int p)
{
	Piece::init(x, y, p, KNIGHT_SYMBOL);
}

int Knight::valid_move(int target_x, int target_y) {
	if (!validinput(target_x, target_y)) {
		return 0;
	}
	return 1;
}