#include "Piece.hpp"
int Piece::get_x() {
	return pos.x;
}

int Piece::get_y() {
	return pos.y;
}

void Piece::move(int x, int y) {
	if (valid_move(x, y)&&validinput(x,y)) {
		pos.x = x;
		pos.y = y;
	}
}

int Piece::valid_move(int target_x, int target_y) {
	return 0;
}

int Piece::validinput(int target_x, int target_y) {
	int same_place = (target_x == this->pos.x) && (target_y == this->pos.y);
	return (!same_place);
}

void Piece::init(int x, int y, int p,char s){//initializes Piece.
	pos.x=x;
	pos.y=y;
	player=p;
	symbol = s;
}
Piece::Piece() { 
	symbol = ' '; 
}//default constructor.
