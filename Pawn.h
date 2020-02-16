#pragma once
#include "Piece.h"
class Pawn : public Piece
{
	int after_first_move = 0;
public:
	int valid_move(int target_x, int target_y);
	Pawn(int x, int y);
	Pawn();
};

