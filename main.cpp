#pragma once
#include <iostream>

#ifndef PAWN_HPP_
#define PAWN_HPP_
#include "Pawn.hpp"
#endif 
#ifndef ROOK_HPP_
#define ROOK_HPP_
#include "Rook.hpp"
#endif 
#ifndef BISHOP_HPP_
#define BISHOP_HPP_
#include "Bishop.hpp"
#endif 
#ifndef KNIGHT_HPP_
#define KNIGHT_HPP_
#include "Knight.hpp"
#endif 
#ifndef QUEEN_HPP_
#define QUEEN_HPP_
#include "Queen.hpp"
#endif 
#ifndef KING_HPP_
#define KING_HPP_
#include "King.hpp"
#endif 

int main() {
	Bishop tb(1, 1, 1);
	King tking(2, 2, 2);
	Queen tq(1, 2, 1);
	Knight tknight(3, 3, 2);
	Rook tr(4, 2, 1);
	Pawn tp(8, 6, 2);
	std::cout << (tr).get_x_position() << (tr).get_y_position() << "\n";
	std::cout << (tp).valid_move(8, 1) << (tr).valid_move(8, 2) << (tknight).valid_move(8, 1) << (tq).valid_move(8, 1) << (tking).valid_move(8, 1) << (tb).valid_move(8, 1)<<"\n";
	std::cout << (tp).valid_move(1, 1) << (tr).valid_move(1, 1) << (tknight).valid_move(1, 1) << (tq).valid_move(1, 1) << (tking).valid_move(1, 1) << (tb).valid_move(1, 1) << "\n";
	std::cout << (tp).valid_move(8, 8) << (tr).valid_move(8, 8) << (tknight).valid_move(8, 8) << (tq).valid_move(8,8) << (tking).valid_move(8, 8) << (tb).valid_move(8, 8) << "\n";
	system("pause");
}