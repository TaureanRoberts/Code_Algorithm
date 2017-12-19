#pragma once
#include "NodeType.h"

template<class Type>
class LinkedListType
{
protected:
	int count;
	NodeType<Type> *first;
	NodeType<Type> *last;

public:
	const LinkedListType<Type>&operator=(const LinkedListType<Type>& other)
	{
		
	}
	void InitializeList()
	{
		
	}
	bool IsEmptyList()
	{
		
	}
	const void Print()
	{

	}
	int Lenght()
	{
		
	}
	void DestroyList()
	{
		
	}
	Type Front()
	{
		
	}
	Type Back()
	{
		
	}
	bool Search(const Type& other) const
	{
		
	}
	void InsertFirst(const Type& other)
	{
		
	}
	void InsertLast(const Type& other)
	{
		
	}
	void DeleteNode(const Type& other)
	{
		
	}
	LinkedListIterator<Type> End()
	{
		
	}
	LinkedListType()
	{
		
	}
	LinkedListType(const LinkedListType<Type>&other)
	{
		
	}
	~LinkedListType()
	{
		
	}

private:
	void CopyList(const LinkedListType<Type>&other);

};