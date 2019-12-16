#pragma once
#include "../lists/array-list.h"
#include "../lists/linked-list.h"
#include "../date/DateTime.h"
#include <vector>

template <class T>
void swap(T* a, T* b)
{
	T t = *a;
	*a = *b;
	*b = t;
}

template <class T>
int partition(vector<T>& vec, int low, int high);
template <class T>
void quickSort(vector<T>& vec, int low, int high);

template <class T>
int partition(Linked_List<T>& list, int low, int high);
template <class T>
void quickSort(Linked_List<T>& list, int low, int high);

template <class T>
int partition(Array_List<T>& arr_list, int low, int high);
template <class T>
void quickSort(Array_List<T>& arr_list, int low, int high);