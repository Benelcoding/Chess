#include "func_declarations.hpp"
#include "config.h"

class Piece {
protected:
	Point pos;
	int player = 0;
	char symbol = '0';
public:
	virtual int valid_move(int target_x, int target_y);
	int get_x();
	int get_y();
	void move(int x, int y);
	void init(int x, int y, int p,char s); //constructor
	int validinput(int target_y, int target_x);
	Piece();
};