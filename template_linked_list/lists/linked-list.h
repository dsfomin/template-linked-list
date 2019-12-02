#pragma once

template<typename T>
class Linked_List
{
public:
	/** Default constructor */
	Linked_List();

	// �������� ������� �������� � ������
	void pop_front();

	// ���������� �������� � ����� ������
	void push_back(T data);

	// �������� ������
	void clear();

	// �������� ���������� ��������� � ������
	int GetSize() { return Size; }

	// ������������� �������� [] 
	T& operator[](const int index);

	// ���������� �������� � ������ ������
	void push_front(T data);

	// ���������� �������� � ������ �� ���������� �������
	void insert(T data, int index);

	// �������� �������� � ������ �� ���������� �������
	void removeAt(int index);

	// �������� ���������� �������� � ������
	void pop_back();

	// ���������� 1)
	void insertionSort();

private:

	// ��������� ����� ����
	template<typename T>
	class Node
	{
	public:
		Node * pNext; // ��������� �� ��������� ������� ������
		T data; // ��������, ������� ��������� � ����� ���� ������

		// ����������� 
		Node(T data = T(), Node *pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};

	int Size; // ������ ������
	Node<T> *head; // ��������� �� ������ ������
};