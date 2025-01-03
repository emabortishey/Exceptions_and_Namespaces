#include "Exception.h"
#include "DoublyLinkedList.h"
#include "Fraction.h"

// ����������� ������������ ��� � ������� �� ������� 23
using namespace user_fraction;

int main()
{
	setlocale(LC_ALL, "Russian");

	// �������� ������� 1 �� ������� 22

	DoublyLinkedList test;

	// ������� ������� ��������� �������� ��� ������ ������
	try
	{
		test.removeLast();
	}
	catch (ContainerIsEmpty obj)
	{
		cout << obj.what();
	}

	// ������� �������� ������� ���� char � ������ ��������� int
	try
	{
		test.append('a');
	}
	catch(WrongTydeid obj)
	{
		cout << obj.what();
	}

	
	// �������� ������� �� ������� 23. ��������� 
	// ������������ ��� ���������� � ������ �����

	Fraction test_namespace_obj;

	// � ������� ������������ ����������� ��������� 1 
	test_namespace_obj.set_num(1);

	// ������� ��������� ����������� 0 ����� ��� ���
	// �������� ������ ������ ���������� + ������������ ���
	try {
		test_namespace_obj.set_den(0);
	}
	catch (InvalidArgument obj)
	{
		cout << obj.what();
	}


	return 0;
}