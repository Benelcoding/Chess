#ifndef PIECE_HPP_
#define PIECE_HPP_
#include "Piece.hpp"
#endif 
class Pawn : public Piece
{
	int after_first_move = 0;
public:
	int valid_move(int target_x, int target_y) override;
	Pawn(int x, int y, int p);
	Pawn();
};

