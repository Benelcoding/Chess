#ifndef PIECE_H_
#define PIECE_H_
#include "Piece.h"
#endif 
int Piece::get_x_position() {
	return x_position;
}

int Piece::get_y_position() {
	return y_position;
}

void Piece::move(int x, int y) {
	x_position = x;
	y_position = y;
}

Piece::Piece(int x,int y,int p)
{
	player = p;
	x_position = x;
	y_position = y;
}
Piece::Piece(){}
