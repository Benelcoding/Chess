#include "King.hpp"

King::King() {}

King::King(int x, int y,int p)
{
	Piece::init(x, y, p, KING_SYMBOL);
}

int King::valid_move(int target_x, int target_y) {
	if (!validinput(target_x, target_y)) {
		return 0;
	}
	return 1;
}