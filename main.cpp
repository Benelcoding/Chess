#pragma once
#ifndef BOARD_HPP_
#define BOARD_HPP_
#include "Board.hpp"
#endif 
#ifndef FUNC_DECLARATIONS_HPP_
#define FUNC_DECLARATIONS_HPP_
#include "func_declarations.hpp"
#endif 


int main() {
	Board B;
	B.make_board();
	int x1, y1, x2, y2, turn = 1;
	do{
		B.display_board();
		if (get_input(&x1, &y1, &x2, &y2)&&valid_input(x1,y1,x2,y2)) {  //checks if the user wants to exit
			if (B.board[x1][y1]->player==turn) {
				if (!B.move_piece(x1, y1, x2, y2)) {
					std::cout << "Invalid Move! Enter a different input please.\n";
				}
				else {
					turn = (!(turn - 1))+1;
				}
			}
			else {
				std::cout << "The piece you chose, belongs to the other player! Enter a different input please.\n";
			}
		}
	} while (x1!= -1);
	system("pause");
}