#include "Knight.hpp"

Knight::Knight() {}//default constructor.

Knight::Knight(int x, int y,int p)//constructs Knight.
{
	Piece::init(x, y, p, KNIGHT_SYMBOL);
}

int Knight::valid_move(int target_x, int target_y) {//checks if the requested move is valid for the knight.
	if (!validinput(target_x, target_y)) {
		return 0;
	}
	return 1;
}