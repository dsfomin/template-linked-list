#pragma once
#include "../lists/array-list.h"
#include "../lists/linked-list.h"
#include <vector>

void merge(vector<DateTime>& vec, int l, int m, int r);
void mergeSort(vector<DateTime>& vec);

void merge(Linked_List<DateTime> list, int l, int m, int r);
void mergeSort(Linked_List<DateTime> list);

void merge(Array_List<DateTime> arr_list, int l, int m, int r);
void mergeSort(Array_List<DateTime> arr_list);
