#include "ConnectFour.h"

ConnectFour::ConnectFour(int numCols, int colHeight)
{
	m_ActiveToken = 'X';
	m_Columns = new Column[numCols]; 
	m_NumCols = numCols;
	m_ColHeights = colHeight;
}

ConnectFour::ConnectFour()
{
	
}

bool ConnectFour::Update()
{

	return false;
}

bool ConnectFour::PlacePiece(int col)
{

	return false;
}

bool ConnectFour::CheckVictory()
{

	return false;
}
