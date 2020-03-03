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
	Bishop tb(4, 4, 1);
	King tking(2, 2, 2);
	Queen tq(4, 4, 1);
	Knight tknight(3, 3, 2);
	Rook tr(4, 2, 1);
	Pawn tp(8, 6, 2);
	std::cout << (tknight).get_x() << (tknight.get_y()) << "\n";
	std::cout << (tknight).valid_move(5, 4) <<"\n";
	std::cout << (tknight).valid_move(1, 4) << "\n";
	std::cout << (tknight).valid_move(5, 2) << "\n";
	system("pause");
}