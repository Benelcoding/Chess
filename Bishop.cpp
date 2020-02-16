#ifndef BISHOP_H_
#define BISHOP_H_
#include "Bishop.h"
#endif 
Bishop::Bishop() {}
Bishop::Bishop(int x, int y,int p)
{
	Piece::Piece(x,y,p);
	symbol = '1';
}

int Bishop::valid_move(int target_x, int target_y) {
	if (!validinput(target_x, target_y)) {
		return 0;
	}
	return 1;
}