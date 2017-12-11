#include "Column.h"

Column::Column()
{
	m_Height = 7;
	m_cell = new Cell;
	m_LastOccupied;
}

Column::Column(int height)
{
	m_Height = height;
	

}

bool Column::PlaceToken(char token)
{
	m_LastOccupied = token;
	if (m_LastOccupied )
	{
		
	}
	return false;
}

bool Column::IsFull()
{

	for(int i = 0; i < 7; i++)
	{
		if (m_cell);
	}

	return false;
}
