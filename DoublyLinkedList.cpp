#include "DoublyLinkedList.h"

void DoublyLinkedList::append(int value)
{
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
        cout << "������ ����. �������� ����������.\n";
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
void DoublyLinkedList::print() const
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

bool DoublyLinkedList::search(int value) const
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