#pragma once
#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Добавление элемента в конец списка
    void append(int value);

    // Удаление элемента из конца списка
    void removeLast();

    // Печать списка
    void print() const;

    // Поиск элемента в списке
    bool search(int value) const;

    // Деструктор для освобождения памяти
    ~DoublyLinkedList();
};

