#ifndef PAWN_HPP_
#define PAWN_HPP_
#include "Pawn.hpp"
#endif 
#ifndef ROOK_HPP_
#define ROOK_HPP_
#include "Rook.hpp"
#endif 
#ifndef BISHOP_HPP_
#define BISHOP_HPP_
#include "Bishop.hpp"
#endif 
#ifndef KNIGHT_HPP_
#define KNIGHT_HPP_
#include "Knight.hpp"
#endif 
#ifndef QUEEN_HPP_
#define QUEEN_HPP_
#include "Queen.hpp"
#endif 
#ifndef KING_HPP_
#define KING_HPP_
#include "King.hpp"
#endif 
class Board
{
public:
	Piece* board [8][8];
	void make_board();
	void display_board();
	int move_piece(int x1, int x2, int y1, int y2);
	int has_a_piece( int x, int y);
	/* has_a_piece:
	Entrance clause: gets the target position.
	Exit clause: answers the question of if the target position has a piece occupying it.
	*/
	void check_in_front_of_pawn(int x, int y, int iteration);
	Board();
};

