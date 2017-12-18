#pragma once
#include <exception>

template<class Type>
struct NodeType
{
	Type info;
	NodeType<Type> *link;
};

template<class Type>
class LinkedListIterator
{
	NodeType<Type> *current;
public:
	LinkedListIterator()
	{
		current = NULL;
	}

	LinkedListIterator(NodeType<Type> *ptr)
	{
		current = ptr;
	}

	Type operator*()
	{
		
	}
	LinkedListIterator<Type> operator++;
	const bool operator ==(const LinkedListIterator<Type>&)
	{
		
	}
	const bool operator !=(const LinkedListIterator<Type>&)
	{
		
	}
};

template<class Type>
class LinkedListType
{
protected:
	int count;
	NodeType<Type> *first;
	NodeType<Type> *last;

public:
	const LinkedListType<Type> & operator=(const LinkedListType<Type>&);
	void InitializeList();
	bool IsEmptyList();
	void Print() const;
	int Lenght();
	void DestroyList();
	Type Front();
	Type Back();
	bool Search(const Type&);
	void InsertFirst(const Type&);
	void InsertLast(const Type&);
	void DeleteNode(const Type&);
	LinkedListIterator<Type> End();
	LinkedListType();
	LinkedListType(const LinkedListType<Type>&);
	~LinkedListType();
private:
	void CopyList(const LinkedListType<Type>&);

};