#include <iostream>
#include  "ListType.h"

//template <class Type>
int main()
{
	/*LinkedListIterator<int> *testTypes = new LinkedListIterator<int>;
	testTypes->*/

	LinkedListType<int> *TestType = new LinkedListType<int>();
	TestType->InsertLast(1);
	TestType->InsertLast(2);
	TestType->InsertLast(3);
	TestType->InsertLast(4);

	


	system("pause");
}
