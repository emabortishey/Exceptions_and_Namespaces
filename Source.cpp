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

	try
	{
		test.append('a');
	}
	catch(WrongTydeid obj)
	{
		cout << obj.what();
	}

	return 0;
}