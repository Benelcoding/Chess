#ifndef PIECE_HPP_
#define PIECE_HPP_
#include "Piece.hpp"
#endif 

class Pawn : public Piece
{
public:
	int before_first_move = 1;
	int valid_move(int target_x, int target_y) override;//uses the function of its parent class but overrides it to fit its needs.
	Pawn(int x, int y, int p);//constructor.
	Pawn();//default constructor.
};

