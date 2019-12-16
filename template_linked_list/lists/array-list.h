#pragma once
#include <vector>
#include "../date/DateTime.h"

using namespace std;

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

	Array_List(vector<T> v);

	// Получить массив
	T* GetArray() { return this->list; }

	// Получить количество елементов
	int GetSize() { return this->size; }

	// Перегруженный оператор [] 
	T& operator[](const int index);

	// Добавление в конец списка
	void push_back(T data);

	// Удаление вконце списка
	void pop_back();

private:
	// Список ввиде массива
	T *list = new T[MAX];

	// Размер массива
	int size = 0;
};

template<typename T>
void Array_List<T>::push_back(T data)
{
	T key = data;
	list[size] = key;
	size++;
}

template<typename T>
void Array_List<T>::pop_back()
{
	list[size - 1] = T();
	size--;
}

template<typename T>
Array_List<T>::Array_List(vector<T> v)
{
	for (T i : v) {
		this->push_back(i);
	}
}

template<typename T>
T & Array_List<T>::operator[](const int index)
{
	return list[index];
}
