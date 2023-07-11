#include <iostream>
#include <string>
#include "player.h"
#include "Board.h"

using namespace std;



int main()
{
	Player playerOne('X', 0);
	Player playerTwo('O', 0);

	Board board;

	board.plotBoard();
}
