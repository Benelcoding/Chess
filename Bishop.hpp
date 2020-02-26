#ifndef PIECE_HPP_
#define PIECE_HPP_
#include "Piece.hpp"
#endif 
class Bishop : public Piece
{
public:
	Bishop(int x, int y,int p);
	int valid_move(int target_x, int target_y) override;
	Bishop();
};

