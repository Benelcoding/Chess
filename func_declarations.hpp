#ifndef IOSTREAM_
#define IOSTREAM_
#include <iostream>
#endif 
#include <cmath>

int onboard(int x1, int y1);
/* onboard:
Entrance clause: gets 2 ints that represent a point.
Exit clause: answers the question: is the point that was inputted on the board?
*/
int valid_input(int x1, int y1, int x2, int y2);
/* valid_input:
Entrance clause: gets 4 ints that represent 2 points
Exit clause: returns 1 if the points entered are not identical and are both on the board, returns 0 otherwise.
*/
int get_input(int* x1, int* y1, int* x2, int* y2);
/* get_input:
Entrance clause: gets 4 ints by reference.
Exit clause: gets input from the user, saves it and returns 0 if the user wants to exit, 1 to continue normally.
*/