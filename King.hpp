#ifndef PIECE_HPP_
#define PIECE_HPP_
#include "Piece.hpp"
#endif 
class King : public Piece
{
public:
	virtual int valid_move(int target_x, int target_y) override;//uses the function of its parent class but overrides it to fit its needs.
	King(int x, int y, int p);//constructor.
	King();//default constructor.
	int ring_around_king(Point a, Point b);
	/* ring_around_king:
	Entrance clause: gets 2 points: a, for the king's position, and b, for the target position.
	Exit clause: answers the question of if point b is in the immediate ring around point a.
	*/
};

