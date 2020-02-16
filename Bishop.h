#ifndef PIECE_H_
#define PIECE_H_
#include "Piece.h"
#endif 
class Bishop : public Piece
{
public:
	Bishop(int x, int y,int p);
	int valid_move(int target_x, int target_y);
	Bishop();
};

