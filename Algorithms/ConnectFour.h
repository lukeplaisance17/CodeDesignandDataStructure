#pragma once
#include "Column.h"
#include "Cell.h"
class ConnectFour
{
public:
	Column* m_Columns;
	char m_ActiveToken;
	int m_NumCols;
	int m_ColHeight;
	ConnectFour(int numCols, int colHeight);
	ConnectFour();
	bool Update();
	void UpdatePlayerOne();
	void UpdatePlayerTwo();
	bool PlacePiece(int col);
	void CheckVictory();
	void PrintBoard();
};