#include "King.hpp"

King::King() {}

King::King(int x, int y,int p)
{
	Piece::init(x, y, p, KING_SYMBOL);
}

int King::valid_move(int target_x, int target_y) { //Checks if the coordinated inputted are considered a valid move for the king.
	if (validinput(target_x, target_y)) {
		Point t;
		t.init(target_x, target_y);
		return ring_around_king(t, this->pos, 1);
	}
	return 0;
}