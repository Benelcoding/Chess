#ifndef FUNC_DECLARATIONS_H_
#define FUNC_DECLARATIONS_H_
#include "func_declarations.h"
#endif 
class Piece{
protected:
	int x_position;
	int y_position;
	int player;
	char symbol;
public:
	int get_x_position();
	int get_y_position();
	void move(int x, int y);
	Piece(int x, int y,int p); //constructor
	Piece();
};