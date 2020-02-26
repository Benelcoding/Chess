#include "Piece.hpp"
int Piece::get_x_position() {
	return x_position;
}

int Piece::get_y_position() {
	return y_position;
}

void Piece::move(int x, int y) {
	x_position = x;
	y_position = y;
}

int Piece::valid_move(int target_x, int target_y) {
	return 0;
}

int Piece::validinput(int target_y, int target_x) {
	int on_the_board = !(target_x > 8 || target_x < 1 || target_y < 1 || target_y>8);
	int same_place = (target_x == this->x_position) && (target_y == this->y_position);
	return on_the_board && (!same_place);
}

void Piece::init(int x, int y, int p,char s){
	x_position=x;
	y_position=y;
	player=p;
	symbol = s;
}
Piece::Piece(){}
