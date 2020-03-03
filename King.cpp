#include "King.hpp"

King::King() {}//default constructor.

King::King(int x, int y,int p)//constructs King.
{
	Piece::init(x, y, p, KING_SYMBOL);
}

int King::valid_move(int target_x, int target_y) { //Checks if the coordinated inputted are considered a valid move for the king.
	if (validinput(target_x, target_y)) {
		Point t;
		t.init(target_x, target_y);
		return ring_around_king(t, this->pos); //explanation: if the target is in the king's immediate ring, the move is valid.
	}
	return 0;
}