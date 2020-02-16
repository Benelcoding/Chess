#ifndef KING_H_
#define KING_H_
#include "King.h"
#endif 
King::King() {}

King::King(int x, int y,int p)
{
	Piece::Piece(x, y,p);
	symbol = 'K';
}

int King::valid_move(int target_x, int target_y) {
	if (!validinput(target_x, target_y)) {
		return 0;
	}
	return 1;
}