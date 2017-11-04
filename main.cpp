#include <iostream>

#include "LinkedList.hpp"

int main()
{
	LinkedList<int> myList{};

	int firstElem = myList.first();

	std::cout << firstElem << std::endl;

	unsigned size = myList.size();

	std::cout << size << std::endl;

	system("pause");
	
	return 0;
}