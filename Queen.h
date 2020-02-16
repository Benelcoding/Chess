#pragma once
#include "Piece.h"
class Queen : public Piece
{
public:
	int valid_move(int target_x, int target_y);
	Queen(int x, int y);
	Queen();
};

