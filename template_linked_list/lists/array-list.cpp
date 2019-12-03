#include "array-list.h"

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

template <class T>
void swap(T* a, T* b)
{
	T t = *a;
	*a = *b;
	*b = t;
}

template<typename T>
void Array_List<T>::insertionSort() 
{
	int *arr = this->GetArray();
	int n = this->GetSize() - 1;
	int i, j;
	T key;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

template<typename T>
T & Array_List<T>::operator[](const int index)
{
	return list[index];
}
