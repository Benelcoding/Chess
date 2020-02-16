#pragma once
#include "Piece.h"
class Knight : public Piece
{
public:
	int valid_move(int target_x, int target_y);
	Knight(int x, int y);
	Knight();
};

