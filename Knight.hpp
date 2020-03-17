#ifndef PIECE_HPP_
#define PIECE_HPP_
#include "Piece.hpp"
#endif 
class Knight : public Piece
{
public:
	virtual int valid_move(int target_x, int target_y) override;//uses the function of its parent class but overrides it to fit its needs.
	Knight(int x, int y, int p);//constructor.
	Knight();//default constructor.
};

