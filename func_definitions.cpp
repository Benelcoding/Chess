#include "func_declarations.hpp" 
#include <iostream>
#include <cmath>

void Point::init(int x, int y) {
	this->y = y;
	this->x = x;
}

int ring(Point a, Point b,int r) {
	return (std::abs(a.x  - b.x)<r+1)&&(std::abs(a.y - b.y)<r+1);
}
