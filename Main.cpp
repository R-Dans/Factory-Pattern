#include "Board.h"

int main()
{
	int x, y;
	Board board;
	char option = 'y';

	board.CreateBoard();

	while (option != 'n')
	{
		cout << endl << "Choose Coordinate Tiles : ";
		cout << endl << "[X] : "; cin >> x;
		cout << "[Y] : "; cin >> y;
		board.use(x, y);
		cout << endl;

		board.CreateBoard();
		cout << endl;
		cout << "Again ?"; 
		cin >> option;
	}
}