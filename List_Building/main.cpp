#include <iostream>
#include  "ListType.h"

//template <class Type>
int main()
{

	LinkedListType<int> *TestType = new LinkedListType<int>();
	LinkedListType<int> *Testing = new LinkedListType<int>();
	TestType->InitializeList();

	TestType->InsertFirst(1);
	TestType->InsertFirst(2);
	TestType->InsertFirst(3);
	TestType->InsertFirst(4);

	TestType->InsertLast(1);
	TestType->InsertLast(2);
	TestType->InsertLast(3);
	TestType->InsertLast(4);
	
	Testing->InsertFirst(1);
	Testing->InsertLast(22);
	TestType = Testing;

	TestType->Print();
	//Testing->Print();

	LinkedListType<int>test(*TestType);
	
}
