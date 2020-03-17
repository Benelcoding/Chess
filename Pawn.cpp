#include "Pawn.hpp"

Pawn::Pawn() {}//default constructor.

Pawn::Pawn(int x, int y,int p)//constructs Pawn.
{
	Piece::init(x, y, p, PAWN_SYMBOL);
}

int Pawn::valid_move(int target_x, int target_y) { //Checks if the coordinated inputted are considered a valid move for the pawn.
	int y_diff = target_y - pos.y;
	int x_diff = target_x - pos.x;
	if (this->player == 2) {
		y_diff *= -1; //if the pawn belongs to the second player, then it moves downwards and not upwards.
		x_diff *= -1; //if the pawn belongs to the second player, then the directions are reversed.
	}
	if (validinput(target_x, target_y)) {
		if ((std::abs(x_diff) == 1) && (y_diff) == 1) {//in the case that the pawn wants to attack (move diagonally).
			if ((has_piece_up_left && (x_diff < 0)) || (has_piece_up_right && (x_diff > 0))) {
				return 1;
			}
			else {//if the pawn moves straight.
				if ((y_diff == 1) || (y_diff == 1 + after_first_move)) {
					return 1;
				}
			}
		}
	}
	return 0;
}