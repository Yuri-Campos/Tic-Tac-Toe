#include "Board.h"
#include <iostream>

using namespace std;

Board::Board() {
	initalizeBoard();
}

void Board::initalizeBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			_bd[i][j] = ' ';
		}
	}

}

void Board::plotBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << _bd[i][j] << " | ";
		}
		cout << endl;

	}
}

void Board::updateBoard(int posX, int posY, char simbol) {
	//TODO: check if the position is valid
	_bd[posX][posY] = simbol;
}