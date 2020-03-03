#include "Knight.hpp"

Knight::Knight() {}//default constructor.

Knight::Knight(int x, int y,int p)//constructs Knight.
{
	Piece::init(x, y, p, KNIGHT_SYMBOL);
}

int Knight::valid_move(int target_x, int target_y) {//checks if the requested move is valid for the knight.
	int diff_x = std::abs(pos.x - target_x);
	int diff_y = std::abs(pos.y - target_y);
	if (validinput(target_x, target_y)) {
		if ((diff_x > 0) && (diff_y > 0) && ((diff_x + diff_y) == 3)) {
			return 1;
		}
	}
	return 0;
}