#pragma once
class Board
{
public:
	Board();
	void initalizeBoard();
	void plotBoard();
	void updateBoard(int posX, int posY, char simbol);
private:
	char _bd[3][3];

};

