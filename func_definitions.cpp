#include "func_declarations.hpp" 

void Point::init(int x, int y) { //initializes the struct Point's fields.
	this->y = y;
	this->x = x;
}

int ring_around_king(Point a, Point b) { //checks if point b is in the immediate ring around point a.
	return (std::abs(a.x  - b.x)<2)&&(std::abs(a.y - b.y)<2);
}
int has_a_piece(int target_x, int target_y) {  //Checks the board for a piece, returns 1 if there is one and 0 if there isnt.
	return 3; //to be implemented!!!!!!!!
}