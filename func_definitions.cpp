#include "func_declarations.hpp" 

void Point::init(int x, int y) { //initializes the struct Point's fields.
	this->y = y;
	this->x = x;
}

int ring_around_king(Point a, Point b) { //checks if point b is in the immediate ring around point a.
	return (std::abs(a.x  - b.x)<2)&&(std::abs(a.y - b.y)<2);
}

int onboard(int x1, int y1){
	int on_board = !(x1 > 7 || x1 < 0 || y1 < 0 || y1>7);
	return on_board;
}

int get_input(int* x1, int* y1, int* x2, int* y2) {
	std::cin >> *x1 >> *y1 >> *x2 >> *y2;
	std::cout << *x1 << *y1 << *x2 << *y2;
	int exit_input = (*x1 != -1) && (*y1 != -1) && (*x2 != -1) && (*y2 != -1);
	return exit_input;
}

int valid_input(int x1, int y1, int x2, int y2) {
	int both_on_board=onboard(x1, y1) && onboard(x2, y2);
	int same_place = (x1 == x2) && (y1 == y2);
	return (!same_place)&&both_on_board;
}

int has_a_piece(Board b,int x, int y) {  //Checks the board for a piece, returns 1 if there is one and 0 if there isnt.
	return !(b.board[x][y].symbol == '0');
}