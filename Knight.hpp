#ifndef PIECE_HPP_
#define PIECE_HPP_
#include "Piece.hpp"
#endif 
class Knight : public Piece
{
public:
	int valid_move(int target_x, int target_y) override;
	Knight(int x, int y, int p);
	Knight();
};

