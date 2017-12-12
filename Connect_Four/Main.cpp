#include <iostream>
#include "Cell.h"
#include "Column.h"
#include "ConnectFour.h"
#include <assert.h>


int main()
{
	Cell *myCell = new Cell;
	Column *myCol = new Column;
	ConnectFour *myFour = new ConnectFour;

	myCol->PlaceToken();


	system("pause");
}