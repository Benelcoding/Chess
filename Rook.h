#ifndef PIECE_H_
#define PIECE_H_
#include "Piece.h"
#endif 
class Rook : public Piece
{
public:
	int valid_move(int target_x, int target_y);
	Rook(int x , int y,int p);
	Rook();
};

