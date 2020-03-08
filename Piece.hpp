#include "func_declarations.hpp"
#include "config.h"

enum Player { White = 1 ,Black }; //enumeration for the player number-> color, 1 is white and 2 is black

class Piece {
protected:
	Point pos;
	int player = 0;
public:
	char symbol = '0';

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
	int validinput(int target_x, int target_y);
	/* validinput:
	Entrance clause: gets the coordinates of a position.
	Exit clause: answers the question of if the position is on the board.
	*/
};