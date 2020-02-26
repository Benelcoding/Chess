#include "Rook.hpp"
Rook::Rook() {}

Rook::Rook(int x, int y,int p)
{
	Piece::init(x, y, p,ROOK_SYMBOL);
}

int Rook::valid_move(int target_x, int target_y) {
	if (validinput(target_x, target_y)) {
		if ((target_x == this->x_position) || (target_y == this->y_position)) {
			return 1;
		}
	}
	return 0;
}