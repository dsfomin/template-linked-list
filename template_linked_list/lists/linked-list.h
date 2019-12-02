#pragma once

template<typename T>
class Linked_List
{
public:
	/** Default constructor */
	Linked_List();

	// Удаление первого элемента в списке
	void pop_front();

	// Добавление элемента в конец списка
	void push_back(T data);

	// Очистить список
	void clear();

	// Получить количество елементов в списке
	int GetSize() { return Size; }

	// Перегруженный оператор [] 
	T& operator[](const int index);

	// Добавление элемента в начало списка
	void push_front(T data);

	// Добавление элемента в список по указанному индексу
	void insert(T data, int index);

	// Удаление элемента в списке по указанному индексу
	void removeAt(int index);

	// Удаление последнего элемента в списке
	void pop_back();

	// Сортировка 1)
	void insertionSort();

private:

	// Шаблонный класс Ноды
	template<typename T>
	class Node
	{
	public:
		Node * pNext; // Указатель на следующий елемент списка
		T data; // Значение, которое храниться в даной Ноде списка

		// Конструктор 
		Node(T data = T(), Node *pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size; // Размер списка
	Node<T> *head; // Указатель на голову списка
};