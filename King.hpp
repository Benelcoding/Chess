#ifndef PIECE_HPP_
#define PIECE_HPP_
#include "Piece.hpp"
#endif 
class King : public Piece
{
public:
	int valid_move(int target_x, int target_y) override;
	King(int x, int y, int p);
	King();
};

