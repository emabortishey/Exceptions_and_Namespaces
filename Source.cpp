#include "Exception.h"
#include "DoublyLinkedList.h"

int main()
{
	setlocale(LC_ALL, "Russian");

	DoublyLinkedList test;

	try
	{
		test.removeLast();
	}
	catch (ContainerIsEmpty obj)
	{
		cout << obj.what();
	}

	return 0;
}