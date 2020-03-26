#include "Board.hpp"
#include <windows.h>

HANDLE c_handle = GetStdHandle(STD_OUTPUT_HANDLE);

void Board::display_board() {
	std::cout << "\n   ";
	for (int i = 0;i < 34;i++) {
		std::cout << "-";
	}
	std::cout << "\n";
	for (int j = 7;j > -1;j--) {
		std::cout << j+1 <<" ";
		for (int i = 0;i < 8;i++) {
			std::cout << " | ";
			set_text_color(i, j);
			std::cout << board[i][j]->symbol;
			SetConsoleTextAttribute(c_handle,DEFAULT_TEXT_COLOR);
		}
		std::cout << " |\n   ";
		for (int i = 0;i < 34;i++) {
			std::cout << "-";
		}
		std::cout << "\n";
	}
	std::cout << "  ";
	for (int i = 0;i < 8;i++) {
		std::cout << "   " << i + 1;
	}
	std::cout << "\n";
}

void Board::make_board() {
	//Empty:
	for (int j = 5;j > 1;j--) {
		for (int i = 0;i <8;i++) {
			board[i][j] = new Piece();
		}
	}
	//Pawns:
	for (int j = 1;j < 7;j += 5) {
		for (int i = 0;i < 8;i++) {
			board[i][j] = new Pawn(i, j, j%4); //makes 2 rows of pawns, one row at y=1 that belongs to player 1, and one row at y=6 that belongs to player 2.
		}
	}
	//Rooks:
	for (int j = 0;j < 8; j += 7) { 
		for (int i = 0;i < 8; i+= 7) {
			board[i][j] = new Rook(i, j, (j+1) % 6); //makes all 4 rooks at the corners of the board, 2 white rooks on the bottom, and 2 black ones on top.
		}
	}
	//Knights:
	for (int j = 0;j < 8; j += 7) {
		for (int i = 1;i < 7; i +=5) {
			board[i][j] = new Knight(i, j, (j + 1) % 6); //makes all 4 knights on board, 2 white knights on the bottom, and 2 black ones on top.
		}
	}
	//Bishops:
	for (int j = 0;j < 8; j += 7) {
		for (int i =2;i < 7; i += 3) {
			board[i][j] = new Bishop(i, j, (j + 1) % 6); //makes all 4 Rooks on board, 2 white Rooks on the bottom, and 2 black ones on top.
		}
	}
	//Kings:
	for (int j = 0;j < 8; j += 7) {
		board[3][j] = new King(3, j, (j + 1) % 6); //makes both kings on the board, white on the bottom and black on the top
	}
	//Queens:
	for (int j = 0;j < 8; j += 7) {
		board[4][j] = new Queen(4, j, (j + 1) % 6); //makes both queens on the board, white on the bottom and black on the top
	}
	/*FIN*/
}

int Board::move_piece(int x1,int y1, int x2, int y2) {
	std::cout << x1 << y1 << x2 << y2 << "\n";
	std::cout << x1 << y1 << " " << (board[x1][y1])->symbol << "\n";
	std::cout << x2 << y2 << " " << (board[x2][y2])->symbol << "\n";
	//the following gets important parameters for pawns.
	if ((board[x1][y1])->symbol == PAWN_SYMBOL) {
		check_in_front_of_pawn(x1, y1);
	}

 	if (board[x1][y1]->valid_move(x2,y2)) {
		board[x2][y2] = board[x1][y1];
		board[x1][y1] = new Piece();
		board[x2][y2]->pos.x = x2;
		board[x2][y2]->pos.y = y2;
		std::cout << (board[x1][y1])->symbol << (board[x2][y2])->symbol << "\n";

		return 1;
	}
	return 0;
}

int Board::has_a_piece(int x, int y) {  //Checks the board for a piece, returns 1 if there is one and 0 if there isnt.
	return !((*this->board[x][y]).symbol == '0');
}

void Board::check_in_front_of_pawn(int x, int y) { 
		int d = 1;
		if ((board[x][y])->player == 2) {
			d = -1;
		}
		if (onboard(x - d, y + d)) {
			board[x][y]->has_piece_up_left = (board[x - d][y + d]->symbol != EMPTY_SYMBOL);
		}
		if (onboard(x + d, y + d)) {
			board[x][y]->has_piece_up_right = (board[x + d][y + d]->symbol != EMPTY_SYMBOL);
		}
}

void Board::set_text_color(int x, int y) {
	if (board[x][y]->player == 2) {
		SetConsoleTextAttribute(c_handle,P2_COLOR);
	}
	else {
		SetConsoleTextAttribute(c_handle,P1_COLOR);
	}
}

Board::Board()
{}