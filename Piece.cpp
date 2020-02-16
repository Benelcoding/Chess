#include "Piece.h"

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

Piece::Piece(int x,int y)
{
	x_position = x;
	y_position = y;
}
Piece::Piece(){}
