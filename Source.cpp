#include "Exception.h"
#include "DoublyLinkedList.h"
#include "Fraction.h"

// подключение пространства имён с задания со встречи 23
using namespace user_fraction;

int main()
{
	setlocale(LC_ALL, "Russian");

	// проверка задания 1 со встречи 22

	DoublyLinkedList test;

	// попытка удалить последнее значение при пустом списке
	try
	{
		test.removeLast();
	}
	catch (ContainerIsEmpty obj)
	{
		cout << obj.what();
	}

	// попытка добавить элемент типа char в список элементов int
	try
	{
		test.append('a');
	}
	catch(WrongTydeid obj)
	{
		cout << obj.what();
	}

	
	// проверка задания со встречи 23. испытание 
	// пространства имён созданного в классе дроби

	Fraction test_namespace_obj;

	// с помощью модификатора присваиваем числителю 1 
	test_namespace_obj.set_num(1);

	// пробуем присвоить знаменателю 0 чтобы ещё раз
	// испытать работу класса исключений + пространства имён
	try {
		test_namespace_obj.set_den(0);
	}
	catch (InvalidArgument obj)
	{
		cout << obj.what();
	}


	return 0;
}