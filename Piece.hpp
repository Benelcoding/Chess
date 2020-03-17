#ifndef IOSTREAM_
#define IOSTREAM_
#include <iostream>
#endif 
#ifndef FUNC_DECLARATIONS_HPP_
#define FUNC_DECLARATIONS_HPP_
#include "func_declarations.hpp"
#endif 
#include "config.h"

struct Point {//initializes the struct Point's fields.
	void init(int x, int y);
	int x = 0;
	int y = 0;
};

enum Player { White = 1 ,Black }; //enumeration for the player number-> color, 1 is white and 2 is black

class Piece {
public:
	Point pos;
	int player = 0;
	int has_piece_up_left = 0;
	int has_piece_up_right = 0;

	char symbol = EMPTY_SYMBOL;

	void init(int x, int y, int p, char s);//initializes Piece.
	Piece();//default constructor.
	//simple get functions:
	int get_x();
	int get_y();

	void move(int x, int y);
	/* move:
	Entrance clause: gets the coordinates of a position.
	Exit clause: moves the piece to the coordinates it recieved.
	*/
	virtual int valid_move(int target_x, int target_y);
	/* valid_move:
	Entrance clause: gets the coordinates of a position.
	Exit clause: answers the question of if moving the piece there is allowed/valid.
	*/
};