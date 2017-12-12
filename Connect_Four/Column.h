#pragma once
#include "Cell.h"
#include <iostream>

using namespace std;

class Column
{
public:
	int m_Height;
	Cell *m_Cells;
	int m_LastOccupied;
	Column();
	Column(int height);
	bool PlaceToken(char token);
	bool IsFull();
};