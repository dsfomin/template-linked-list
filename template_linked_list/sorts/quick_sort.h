#pragma once
#include "../lists/array-list.h"
#include "../lists/linked-list.h"
#include <vector>

template <class T>
void swap(T* a, T* b)
{
	T t = *a;
	*a = *b;
	*b = t;
}

int partition(vector<DateTime>& vec, int low, int high);
void quickSort(vector<DateTime>& vec);

int partition(Linked_List<DateTime>& list, int low, int high);
void quickSort(Linked_List<DateTime>& list);

int partition(Array_List<DateTime>& arr_list, int low, int high);
void quickSort(Array_List<DateTime>& arr_list);