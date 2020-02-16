#ifndef KNIGHT_H_
#define KNIGHT_H_
#include "Knight.h"
#endif 
Knight::Knight() {}

Knight::Knight(int x, int y,int p)
{
	Piece::Piece(x, y,p);
	symbol = '4';
}

int Knight::valid_move(int target_x, int target_y) {
	if (!validinput(target_x, target_y)) {
		return 0;
	}
	return 1;
}