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

	void make_board();//makes the board
	void display_board();//displays the board
	int move_piece(int x1, int x2, int y1, int y2);
	/* move_piece:
	Entrance clause: gets the location of a piece and a target position.
	Exit clause: moves the piece (at x1,y1) to the target position (x2,y2), if the move is valid.
	*/
	int has_a_piece( int x, int y);
	/* has_a_piece:
	Entrance clause: gets the target position.
	Exit clause: answers the question of if the target position has a piece occupying it.
	*/
	void check_in_front_of_pawn(int x, int y);
	/* check_in_front_of_pawn:
	Entrance clause: gets a location on the board where a pawn exists.
	Exit clause: updates the has_piece fields in the pawn piece.
	*/
	void set_text_color(int x, int y);
	/* set_text_color:
	Entrance clause: gets a position on the board of a piece we're trying to print.
	Exit clause: sets the text color appropriate color, according to the player.
	*/
	Board();
};

