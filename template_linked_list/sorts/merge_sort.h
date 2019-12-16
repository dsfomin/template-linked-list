#pragma once
#include "../lists/array-list.h"
#include "../lists/linked-list.h"
#include "../date/DateTime.h"
#include <vector>

template <class T>
void merge(vector<T>& vec, int l, int m, int r);
template <class T>
void mergeSort(vector<T>& vec, int l, int r);

template <class T>
void merge(Linked_List<T> list, int l, int m, int r);
template <class T>
void mergeSort(Linked_List<T> list, int l, int r);

template <class T>
void merge(Array_List<T> arr_list, int l, int m, int r);
template <class T>
void mergeSort(Array_List<T> arr_list, int l, int r);
