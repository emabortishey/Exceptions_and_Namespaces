#include "Exception.h"
#include "DoublyLinkedList.h"
#include "Fraction.h"

using namespace user_fraction;

int main()
{
	setlocale(LC_ALL, "Russian");

	DoublyLinkedList test;

	Fraction test_namespace_obj;

	test_namespace_obj.set_num(1);

	try {
		test_namespace_obj.set_den(0);
	}
	catch (InvalidArgument obj)
	{
		cout << obj.what();
	}

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