#ifndef QUEEN_H_
#define QUEEN_H_
#include "Queen.h"
#endif 
Queen::Queen() {}

Queen::Queen(int x, int y,int p)
{
	Piece::Piece(x, y, p);
	symbol = 'Q';
}

int Queen::valid_move(int target_x, int target_y) {
	if (!validinput(target_x, target_y)) {
		return 0;
	}
	return 1;
}