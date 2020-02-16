#pragma once
class Piece
{
protected:
	int x_position;
	int y_position;
public:
	int get_x_position();
	int get_y_position();
	void move(int x, int y);
	Piece(int x, int y); //constructor
	~Piece(); //destructor
};