#pragma once
#include <iostream>
#include "Pawn.h"
#include "Rook.h"
#include "Bishop.h"
#include "Knight.h"
#include "Queen.h"
#include "King.h"
int main() {
	Bishop tb(1,1,1);
	King tking(2, 2, 2);
	Queen tq(1, 2, 1);
	Knight tknight(3, 3, 2);
	Rook tr(4, 2, 1);
	Pawn tp(8, 6, 2);

	std::cout << tp.valid_move(9, 1) << tr.valid_move(9, 1) << tknight.valid_move(9, 1) << tq.valid_move(9, 1) << tking.valid_move(9, 1) << tb.valid_move(9, 1)<<"\n";
	std::cout << tp.valid_move(0, 1) << tr.valid_move(0, 1) << tknight.valid_move(0, 1) << tq.valid_move(0, 1) << tking.valid_move(0, 1) << tb.valid_move(0, 1) << "\n";
	std::cout << tp.valid_move(9, 9) << tr.valid_move(9, 9) << tknight.valid_move(9, 9) << tq.valid_move(9, 9) << tking.valid_move(9, 9) << tb.valid_move(9, 9) << "\n";
	system("pause");
}