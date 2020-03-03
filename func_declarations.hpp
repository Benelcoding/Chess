#include <iostream>
#include <cmath>

struct Point {//initializes the struct Point's fields
	void init(int x, int y);
	int x = 0;
	int y = 0;
};

int ring_around_king(Point a, Point b);
/* ring_around_king:
Entrance clause: gets 2 points: a, for the king's position, and b, for the target position.
Exit clause: answers the question of if point b is in the immediate ring around point a.
*/
int has_a_piece(int target_x, int target_y);
/* has_a_piece:
Entrance clause: gets the target position.
Exit clause: answers the question of if the target position has a piece occupying it.
*/