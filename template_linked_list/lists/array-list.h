#pragma once

const int MAX = 256;

/**
 * Template class for arraylist
 *
 * The class is implemented to represent the list as an array.
 */

template <typename T>
class Array_List
{
public:
	/** Default constructor */
	Array_List() {};

	// �������� ������
	T* GetArray() { return this->list; }

	// �������� ���������� ���������
	int GetSize() { return this->size; }

	// ������������� �������� [] 
	T& operator[](const int index);

	// ���������� � ����� ������
	void push_back(T data);

	// �������� ������ ������
	void pop_back();

	// ���������� 1)
	void insertionSort();

private:
	// ������ ����� �������
	T *list = new T[MAX];

	// ������ �������
	int size = 0;
};