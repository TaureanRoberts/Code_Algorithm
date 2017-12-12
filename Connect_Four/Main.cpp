#include <iostream>
#include "Cell.h"
#include "Column.h"
#include "ConnectFour.h"
#include <assert.h>


int main()
{
	ConnectFour *myFour = new ConnectFour;

	myFour->Update();
	myFour->Draw();

	system("pause");
}