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
	//
	//
	//
	const LinkedListType<Type>&operator=(const LinkedListType<Type>& other)
	{
		
	}

	//
	//
	void InitializeList()
	{
		
	}

	//
	//
	bool IsEmptyList()
	{
		
	}

	//
	//
	const void Print()
	{

	}
	//
	//
	//
	int Lenght()
	{
		
	}

	//Function to return the nodes in the list
	//Post Condition: first = NULL, last = NULL, and count = 0
	void DestroyList()
	{
		int someArray;

		 while (someArray != '\0')
		 {
			 
		 }
	}
	//Function to return the first element of the list
	//Precondition: The list must exist and must not be empty
	//PostCondition: If the list is empty , the program terminatese
	Type Front()
	{
		return  DestroyList();
	}

	//Function to return the last element of the list
	//Precondition: The list must exist and not be empty. 
	//PostCondition:if the list is empty, the program terminates; otherwise, the last element of the list is returned
	Type Back()
	{
		return DestroyList();
	}

	//
	//
	bool Search(const Type& other) const
	{
		
	}

	//
	//
	void InsertFirst(const Type& other)
	{
		
	}

	//
	//
	void InsertLast(const Type& other)
	{

	}

	//
	//
	void DeleteNode(const Type& other)
	{
		
	}

	//
	//
	LinkedListIterator<Type> End()
	{
		
	}

	//
	LinkedListType()
	{
		
	}

	//
	//
	LinkedListType(const LinkedListType<Type>&other)
	{
		
	}

	//
	//
	~LinkedListType()
	{
		
	}

private:
	void CopyList(const LinkedListType<Type>&other);

};