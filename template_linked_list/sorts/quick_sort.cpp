#include "quick_sort.h"

template <class T>
int partition(vector<T>& vec, int low, int high)
{
	T pivot = vec[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (vec[j] < pivot)
		{
			i++;
			swap(&vec[i], &vec[j]);
		}
	}
	swap(&vec[i + 1], &vec[high]);
	return (i + 1);
}

template <class T>
void quickSort(vector<T>& vec, int low, int high)
{
	if (low < high)
	{
		int pi = partition(vec, low, high);
  
		quickSort(vec, low, pi - 1);
		quickSort(vec, pi + 1, high);
	}
}

template <class T>
int partition(Linked_List<T>& list, int low, int high)
{
	T pivot = list[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (list[j] < pivot)
		{
			i++;
			swap(&list[i], &list[j]);
		}
	}
	swap(&list[i + 1], &list[high]);
	return (i + 1);
}

template <class T>
void quickSort(Linked_List<T>& list, int low, int high)
{
	if (low < high)
	{
		int pi = partition(list, low, high);

		quickSort(list, low, pi - 1);
		quickSort(list, pi + 1, high);
	}
}

template <class T>
int partition(Array_List<T>& arr_list, int low, int high)
{
	T pivot = arr_list[high];
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		if (arr_list[j] < pivot)
		{
			i++;
			swap(&arr_list[i], &arr_list[j]);
		}
	}
	swap(&arr_list[i + 1], &arr_list[high]);
	return (i + 1);
}

template <class T>
void quickSort(Array_List<T>& arr_list, int low, int high)
{
	if (low < high)
	{
		int pi = partition(arr_list, low, high);

		quickSort(arr_list, low, pi - 1);
		quickSort(arr_list, pi + 1, high);
	}
}
