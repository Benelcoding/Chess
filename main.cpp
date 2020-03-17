#pragma once
#include <iostream>
#ifndef BOARD_HPP_
#define BOARD_HPP_
#include "Board.hpp"
#endif 



int main() {
	Board B;
	B.make_board();
	int x1, y1, x2, y2;
	do{
		B.display_board();
		if (get_input(&x1, &x2, &y1, &y2)) {  //checks if the user wants to exit
			if (!B.move_piece(x1, y1, x2, y2)) {
				std::cout << "Invalid Move! Enter a different input please.\n";
			}
		}
	} while (x1!= -1);
	system("pause");
}