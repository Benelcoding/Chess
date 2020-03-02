#include <iostream>
#include <cmath>

struct Point {
	void init(int x, int y);
	int x = 0;
	int y = 0;
};

int ring_around_king(Point a, Point b,int r);
int has_a_piece(int target_x, int target_y);