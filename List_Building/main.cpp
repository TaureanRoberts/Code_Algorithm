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

	TestType->InsertLast(5);
	TestType->InsertLast(6);
	TestType->InsertLast(7);
	TestType->InsertLast(8);
	
	Testing->InsertFirst(1);
	Testing->InsertLast(22);
	TestType = Testing;

	TestType->Print();
	Testing->Print();

	LinkedListType<int>test(*TestType);
	
	system("pause");
}
