#include <iostream>
#include  "ListType.h"
#include "assert.h"

int main()
{
	LinkedListType<int> *test = new LinkedListType<int>;
	LinkedListType<int> *test2 = new LinkedListType<int>;
	
	test->InitializeList();

	test->InsertFirst(12);
	test->InsertFirst(8);

	test->InsertLast(39);
	test->InsertLast(40);

	test2->InsertFirst(1);
	test2->InsertLast(22);

	test->DeleteNode(12);

	assert(test->Search(8) == true);
	assert(test->Search(12) == false);

	test = test2;
	test->Print();

	test->Begin();
	test->End();

	LinkedListType<int>test3(*test);

	system("pause");
}