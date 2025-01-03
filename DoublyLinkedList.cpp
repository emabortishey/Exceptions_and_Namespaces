#include "DoublyLinkedList.h"
#include "Exception.h"

void DoublyLinkedList::append(int value) 
{
    if (typeid(value).name() != "int")
    {
        throw WrongTydeid("\n\nValue isn't having the same type id as a Node::data! Value couln't be added into the list.\n\n");
    }
    // �������� ������������ ���������� �����������
    // ��������� ������� ��������� � ����� ������
    Node* newNode = new Node(value);

    if (tail == nullptr)
    {   // ���� ������ ����, ������� �����������
        // ��� ������ � ���������, �� ���� ������������
        // � ��� ��������, ���� � ���
        head = tail = newNode;
    }
    else
    {
        // ���� �� � ������ ���� �������� ��
        // ��������� ���������� ������� ������������
        // � ������� ����� ���������� ��� ���������� ������
        // ����� ����� ���������� � ������� ���� ������������� �����,
        // � ����� �������� ������ ������������ ��������� ��
        // ��� ����� ����������
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void DoublyLinkedList::removeLast()
{
    if (head == nullptr)
    {   // ���� ������ ����, �������� ���������� �������� ����������
        // ������� ���������� ������ ����������
        throw ContainerIsEmpty("\nIt's impossible to remove the last element, container is already empty.\n");

        return;
    }
    else if (head == tail)
    {   // ���� � ������ 1 �������, ��� ������������ ������
        // ��������� ������� � ���������-���������� ������������� �������
        delete head;
        head = tail = nullptr;
    }
    else
    {
        // ��������� ���������-������ �� ��������� �������
        Node* temp = tail;

        // �������� ��������� �� ����� ������������� ���������� �������
        tail = tail->prev;

        // ���������� �������� ������ ������ �������������
        // ������� (���������� ���������)
        tail->next = nullptr;

        // �������� ������������ ������ � ������� ��������� ��
        // ������ ��������� �������
        delete temp;
    }
}

// ������ ������
void DoublyLinkedList::print() const noexcept
{
    // �������� ������� ��� �������� �� ���������
    Node* current = head;

    // ���� �� ����� ��������� �����, ���� ������������ 
    while (current != nullptr)
    {
        // ����� �������� �� ��������� �� �������� ��������
        cout << current->data << " ";

        // ������� � ���������� ��������
        current = current->next;
    }
}

bool DoublyLinkedList::search(int value) const noexcept
{
    // ������� ��� ������� �� ���������
    Node* current = head;

    while (current != nullptr)
    {
        // ��������� � ���������� ��������� �������� ��������
        if (current->data == value)
        {
            // ����������� ��� ���� ������� ���������
            return true;
        }

        // ������� � ���������� ��������
        current = current->next;
    }

    // ���� ������� ��� � �� ���� ���������, ���������� ����
    return false;
}

DoublyLinkedList::~DoublyLinkedList()
{
    // �����
    Node* current = head;

    // ���� ��������� ������� �� ����� ���������
    while (current != nullptr)
    {
        // ��������� ������� �������� � ��� 1 �����, �.�. ��� ��������
        // �� �� ������ ������� � ����. ��������
        Node* nextNode = current->next;

        // ������� ������� �������
        delete current;

        // ����������� 1 ������ �������� ������� ���������� 2
        current = nextNode;
    }
}