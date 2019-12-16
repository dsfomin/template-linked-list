#pragma once
#include "../lists/array-list.h"
#include "../lists/linked-list.h"
#include "../date/DateTime.h"
#include <vector>

template <class T>
void insertionSort(vector<T>& vec);

template <class T>
void insertionSort(Linked_List<T> list);

template <class T>
void insertionSort(Array_List<T> arr_list);

template <class T>
void insertionSort(Array_List<T> arr_list)
{
	int i, j;
	T key;
	for (i = 1; i < arr_list.GetSize(); i++)
	{
		key = arr_list[i];
		j = i - 1;

		while (j >= 0 && arr_list[j] > key)
		{
			arr_list[j + 1] = arr_list[j];
			j = j - 1;
		}
		arr_list[j + 1] = key;
	}
}

template <class T>
void insertionSort(vector<T>& vec)
{
	int i, j;
	T key;
	for (i = 1; i < vec.size(); i++)
	{
		key = vec[i];
		j = i - 1;

		while (j >= 0 && vec[j] > key)
		{
			vec[j + 1] = vec[j];
			j = j - 1;
		}
		vec[j + 1] = key;
	}
}

template <class T>
void insertionSort(Linked_List<T> list)
{
	int i, j;
	T key;
	for (i = 1; i < list.GetSize(); i++)
	{
		key = list[i];
		j = i - 1;


		while (j >= 0 && list[j] > key)
		{
			list.removeAt(j + 1);
			list.insert(list[j], j + 1);
			j = j - 1;
		}
		list.removeAt(j + 1);
		list.insert(key, j + 1);
	}
}