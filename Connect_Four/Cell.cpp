#include "Cell.h"

Cell::Cell()
{
	m_Token = NULL;
}

Cell::Cell(char token)
{
	m_Token = token;
}

bool Cell::operator==(Cell & other)
{
	return m_Token == other.m_Token;
}
