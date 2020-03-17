#include <iostream>
#include <cmath>
#ifndef BOARD_HPP_
#define BOARD_HPP_
#include "Board.hpp"
#endif 

struct Point {//initializes the struct Point's fields.
	void init(int x, int y);
	int x = 0;
	int y = 0;
};

int onboard(int x1, int y1);
/* onboard:
Entrance clause: gets 2 ints that represent a point.
Exit clause: answers the question: is the point that was inputted on the board?
*/
int valid_input(int x1, int y1, int x2, int y2);
/* valid_input:
Entrance clause: gets 4 ints that represent 2 points
Exit clause: returns 1 if the points entered are not identical and are both on the board, returns 0 otherwise.
*/
int get_input(int* x1, int* y1, int* x2, int* y2);
/* get_input:
Entrance clause: gets 4 ints by reference.
Exit clause: gets input from the user, saves it and returns 0 if the user wants to exit, 1 to continue normally.
*/
int ring_around_king(Point a, Point b);
/* ring_around_king:
Entrance clause: gets 2 points: a, for the king's position, and b, for the target position.
Exit clause: answers the question of if point b is in the immediate ring around point a.
*/
int has_a_piece(int target_x, int target_y);
/* has_a_piece:
Entrance clause: gets the target position.
Exit clause: answers the question of if the target position has a piece occupying it.
*/