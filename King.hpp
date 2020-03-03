#ifndef PIECE_HPP_
#define PIECE_HPP_
#include "Piece.hpp"
#endif 
class King : public Piece
{
public:
	int valid_move(int target_x, int target_y) override;//uses the function of its parent class but overrides it to fit its needs.
	King(int x, int y, int p);//constructor.
	King();//default constructor.
};

