#include "Column.h"

Column::Column()
{
	m_Height = 7;
	m_Cell = new Cell;
	m_LastOccupied = NULL;
}

Column::Column(int height)
{
	m_Height = height;
}

bool Column::PlaceToken(char token)
{

	for (int i = 0; i < 6; i++)
	{
		if (m_Height < m_LastOccupied)
		{
			m_Cell++;
		}
	}

	return false;
}

bool Column::IsFull()
{
	if (m_LastOccupied == m_Height)
	{
		cout << "This Column is full \n";
	}
	return false;
}
