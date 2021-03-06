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
	Draw();
	int col;

	cout << "Player " << m_ActiveToken << ": Choose a column \n";
	cin >> col;
	PlacePiece(col - 1);
	m_ActiveToken == 88 ? m_ActiveToken = 79 : m_ActiveToken = 88;

	return false;
}

bool ConnectFour::PlacePiece(int col)
{
	if(m_Columns[col].PlaceToken(m_ActiveToken))
	{
		
	}
	return false;
}

bool ConnectFour::CheckVictory()
{
	for (int i = 0; i < m_NumCols; i++)
	{
		for (int j = 0; j < m_ColHeights; j++)
		{
			if ((m_Columns[i].m_Cells[j].m_Token == 88 || m_Columns[i].m_Cells[j].m_Token == 79) && m_Columns[i].m_Cells[j] == m_Columns[i].m_Cells[j + 1])
			{
				m_Columns[i].m_Cells[j+1] == m_Columns[i].m_Cells[j+2] && m_Columns[i].m_Cells[j+2] == m_Columns[i].m_Cells[j+3];
				return true;
			}
			if ((m_Columns[i].m_Cells[j].m_Token == 88 || m_Columns[i].m_Cells[j].m_Token == 79) && m_Columns[i].m_Cells[j] == m_Columns[i].m_Cells[j])
			{
				m_Columns[i+1].m_Cells[j] == m_Columns[i+2].m_Cells[j] && m_Columns[i+2].m_Cells[j] == m_Columns[i+3].m_Cells[j];
				return true;
			}
		}
	}
	return false;
}

void ConnectFour::Draw()
{

	for (int i = m_ColHeights; i > 0; i--)
	{
		for (int j = 0; j < m_NumCols; j++)
		{
			cout << "|" << m_Columns[i].m_Cells[j].m_Token  <<"|";
		}
		cout << endl;
	}
}