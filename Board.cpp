#include "Board.hpp"

void Board::display_board() {
	for (int j = 0;j < 8;j ++) {
		for (int i = 0;i < 8;i++) {
			std::cout << " | " << board[i][j].symbol;
		}
		std::cout << " |\n ";
		for (int i = 0;i < 34;i++) {
			std::cout << "-";
		}
		std::cout << "\n";
	}
}

void Board::make_board() {
	//Pawns:
	for (int j = 1;j < 7;j += 5) {
		for (int i = 0;i < 8;i++) {
			board[i][j] = Pawn(i, j, j%4); //makes 2 rows of pawns, one row at y=1 that belongs to player 1, and one row at y=6 that belongs to player 2.
		}
	}
	//Rooks:
	for (int j = 0;j < 8; j += 7) { 
		for (int i = 0;i < 8; i+= 7) {
			board[i][j] = Rook(i, j, (j+1) % 6); //makes all 4 rooks at the corners of the board, 2 white rooks on the bottom, and 2 black ones on top.
		}
	}
	//Knights:
	for (int j = 0;j < 8; j += 7) {
		for (int i = 1;i < 7; i +=5) {
			board[i][j] = Knight(i, j, (j + 1) % 6); //makes all 4 knights on board, 2 white knights on the bottom, and 2 black ones on top.
		}
	}
	//Bishops:
	for (int j = 0;j < 8; j += 7) {
		for (int i =2;i < 7; i += 3) {
			board[i][j] = Bishop(i, j, (j + 1) % 6); //makes all 4 Rooks on board, 2 white Rooks on the bottom, and 2 black ones on top.
		}
	}
	//Kings:
	for (int j = 0;j < 8; j += 7) {
		board[3][j] = King(3, j, (j + 1) % 6); //makes both kings on the board, white on the bottom and black on the top
	}
	//Queens:
	for (int j = 0;j < 8; j += 7) {
		board[4][j] = Queen(4, j, (j + 1) % 6); //makes both queens on the board, white on the bottom and black on the top
	}
	/*FIN*/
}

int Board::move_piece(int x1,int y1, int x2, int y2) {
	std::cout << x1 << y1 << x2 << y2 << "\n";
 	if (board[x1][y1].valid_move(x2,y2)) {
		board[x2][y2] = board[x1][y1];
		board[x1][y1] = Piece();
		std::cout << board[x1][y1].symbol << board[x2][y2].symbol << "\n";
		if (board[x2][y2].symbol == PAWN_SYMBOL) {
			int d = 1;
			if (board[x2][y2].player == 2) {
				d = -1;
			}
			(board[x2][y2]).has_piece_up_left=(board[x2-d][y2+d].symbol!=EMPTY_SYMBOL);
			(board[x2][y2]).has_piece_up_right = (board[x2 + d][y2 + d].symbol != EMPTY_SYMBOL);
		}
		return 1;
	}
	return 0;
}

int Board::has_a_piece(int x, int y) {  //Checks the board for a piece, returns 1 if there is one and 0 if there isnt.
	return !(this->board[x][y].symbol == '0');
}

Board::Board()
{}