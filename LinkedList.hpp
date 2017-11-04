#ifndef _LINKED_LIST_GUARD
#define _LINKED_LIST_GUARD 1

#include <iostream>

#include "ListInterface.h"

template <typename T>
class LinkedList : public ListInterface<T>
{
private:
	//
	// Private node class to facilitate linked list
	//
	class Node
	{
	public:
		T _data;
		Node* _next;

		// Constructor: default
		Node(T d = T{}, Node* n = nullptr) : _data(d), _next(n) {}

		~Node() { _next = nullptr; }
	};

	//
	// Prevent copying and assigning
	//
	LinkedList(const LinkedList& rhs) {}
	const LinkedList& operator=(const LinkedList& rhs) {}

public:
	//
	// LinkedList instance variables; we use dummy head and tail nodes in this implementation
	//
	unsigned _size;
	Node* _head;
	Node* _tail;

	// Constructor constructs blank linked list.
	LinkedList() : _size{ 0 }, _head{ NULL, nullptr }, _tail{ NULL, nullptr }
	{

	}

	// Returns the first element in the list
	T& first() const
	{
		return _head->_next->_data;
	}

	// Returns the number of elements in this container
	unsigned size() const
	{
		return _size;
	}

	//
	//
	//
	// TODO: all interface functions
	//
	//
	//




	//
	// Internal consistency check
	//
public:
	/*virtual bool check() const
	{
		bool sizeConsistent = isSizeConsistent();
		bool headTailConsistent = isEndConsistent();

		if (!sizeConsistent) std::cerr << "Size inconsistent" << std::endl;
		if (!headTailConsistent) std::cerr << "Head / Tail inconsistent" << std::endl;

		return sizeConsistent && headTailConsistent;
	}*/

	//
	// Stated size is accurate to the entire list
	//
	/*bool isSizeConsistent() const
	{
		int count = 0;
		for (Node* current = _head->_next; current != _tail; current = current->_next)
		{
			count++;
		}

		return size() == count;
	}*/

	//
	// Checks that the head and tail are defaulted properly and the
	// respective next pointers are appropriate.
	//
	/*bool isEndConsistent() const
	{
		if (_head->_data != T{}) return false;

		if (_tail->_data != T{}) return false;

		if (_head->_next == nullptr) return false;

		if (_tail->_next != nullptr) return false;

		if (isEmpty() && _head->_next != _tail) return false;

		if (!isEmpty() && _head->_next == _tail) return false;

		return true;
	}*/
};

#endif