#pragma once
#include "Piece.h"
class King : public Piece
{
public:
	int valid_move(int target_x, int target_y);
	King(int x, int y);
	King();
};

