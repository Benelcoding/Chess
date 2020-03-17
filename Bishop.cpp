#include "Bishop.hpp"

Bishop::Bishop() {} //default constructor.
Bishop::Bishop(int x, int y,int p) //constructs Bishop.
{
	Piece::init(x, y, p, BISHOP_SYMBOL);
}

int Bishop::valid_move(int target_x, int target_y){ //Checks if the coordinated inputted are considered a valid move for the bishop.
	int down_diagonal = ((pos.x + pos.y) == (target_x + target_y)); //returns 1 if the target is on the \ diagonal from the bishop's current position.
	int up_diagonal = ((pos.x - pos.y) == (target_x - target_y)); // returns 1 if the target is on the / diagonal from the bishop's current position.
	if (up_diagonal||down_diagonal) {
		return 1;
	}
	return 0;
}