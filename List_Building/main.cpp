#include <iostream>
#include  "ListType.h"
#include "assert.h"

int main()
{

	LinkedListType<int> *TestType = new LinkedListType<int>();
	LinkedListType<int> *Testing = new LinkedListType<int>();
	TestType->InitializeList();

	TestType->InsertFirst(1);

	TestType->InsertLast(5);
	
	Testing->InsertFirst(1);
	Testing->InsertLast(22);
	TestType = Testing;

	TestType->Print();

	LinkedListType<int>test(*TestType);
	
	LinkedListIterator<int> *someA = new LinkedListIterator<int>();
	LinkedListIterator<int> *someB = new LinkedListIterator<int>();

	int i = 2;

	//assert((someA  ) == true);

	system("pause");
}
