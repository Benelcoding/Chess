#ifndef PIECE_HPP_
#define PIECE_HPP_
#include "Piece.hpp"
#endif 
#ifndef ROOK_HPP_
#define ROOK_HPP_
#include "Rook.hpp"
#endif 
#ifndef BISHOP_HPP_
#define BISHOP_HPP_
#include "Bishop.hpp"
#endif 
class Queen : public Piece
{
public:
	int valid_move(int target_x, int target_y) override;
	Queen(int x, int y,int p);
	Queen();
};

