#pragma once
#include "Piece.h"
class Bishop : public Piece
{
public:
	int valid_move(int target_x, int target_y);
	Bishop(int x, int y);
	Bishop();
};

