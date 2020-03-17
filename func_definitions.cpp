#include "func_declarations.hpp" 


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