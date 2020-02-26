#include "Bishop.hpp"

Bishop::Bishop() {}
Bishop::Bishop(int x, int y,int p)
{
	Piece::init(x, y, p, BISHOP_SYMBOL);
}

int Bishop::valid_move(int target_x, int target_y){
	int down_diagonal = ((this->x_position + this->y_position) == (target_x + target_y));
	int up_diagonal = ((this->x_position - this->y_position) == (target_x - target_y));
	if (validinput(target_x, target_y)) {
		if (up_diagonal||down_diagonal) {
			return 1;
		}
	}
	return 0;
}