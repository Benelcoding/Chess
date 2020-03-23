#include "Piece.hpp"

void Point::init(int x, int y) { //initializes the struct Point's fields.
	this->y = y;
	this->x = x;
}

int Piece::get_x() {
	return pos.x;
}

int Piece::get_y() {
	return pos.y;
}

void Piece::move(int x, int y) {
	if (valid_move(x, y)) {
		pos.x = x;
		pos.y = y;
	}
}

int Piece::valid_move(int target_x, int target_y) {
	std::cout << "In Piece's valid_move func\n";
	return 0;
}



void Piece::init(int x, int y, int p,char s){//initializes Piece.
	pos.x=x;
	pos.y=y;
	player=p;
	symbol = s;
}
Piece::Piece() { 
	symbol = EMPTY_SYMBOL; 
}//default constructor.
