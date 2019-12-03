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

	// Сортировка 1)
	void insertionSort();

private:
	// Список ввиде массива
	T *list = new T[MAX];

	// Размер массива
	int size = 0;
};