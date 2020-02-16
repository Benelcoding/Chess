#pragma once
#include "Piece.h"
class Rook : public Piece
{
public:
	int valid_move(int target_x, int target_y);
	Rook(int x , int y);
	Rook();
};

