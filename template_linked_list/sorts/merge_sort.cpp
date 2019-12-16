#include "merge_sort.h"

template <class T>
void merge(vector<T>& vec, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	T *L = new T[n1];
	T *R = new T[n2];

	for (i = 0; i < n1; i++)
		L[i] = vec[l + i];
	for (j = 0; j < n2; j++)
		R[j] = vec[m + 1 + j];

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] < R[j] || L[i] == R[j])
		{
			vec[k] = L[i];
			i++;
		}
		else
		{
			vec[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		vec[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		vec[k] = R[j];
		j++;
		k++;
	}
}

template <class T>
void mergeSort(vector<T>& vec, int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		mergeSort(vec, l, m);
		mergeSort(vec, m + 1, r);

		merge(vec, l, m, r);
	}
}

template <class T>
void merge(Linked_List<T> list, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	T *L = new T[n1];
	T *R = new T[n2];

	for (i = 0; i < n1; i++)
		L[i] = list[l + i];
	for (j = 0; j < n2; j++)
		R[j] = list[m + 1 + j];

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] < R[j] || L[i] == R[j])
		{
			list.removeAt(k);
			list.insert(L[i], k);
			i++;
		}
		else
		{
			list.removeAt(k);
			list.insert(R[j], k);
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		list.removeAt(k);
		list.insert(L[i], k);
		i++;
		k++;
	}

	while (j < n2)
	{
		list.removeAt(k);
		list.insert(R[j], k);
		j++;
		k++;
	}
}

template <class T>
void mergeSort(Linked_List<T> list, int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		mergeSort(list, l, m);
		mergeSort(list, m + 1, r);

		merge(list, l, m, r);
	}
}

template <class T>
void merge(Array_List<T> arr_list, int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	T *L = new T[n1];
	T *R = new T[n2];

	for (i = 0; i < n1; i++)
		L[i] = arr_list[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr_list[m + 1 + j];

	i = 0;
	j = 0;
	k = l;
	while (i < n1 && j < n2)
	{
		if (L[i] < R[j] || L[i] == R[j])
		{
			arr_list[k] = L[i];
			i++;
		}
		else
		{
			arr_list[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < n1)
	{
		arr_list[k] = L[i];
		i++;
		k++;
	}

	while (j < n2)
	{
		arr_list[k] = R[j];
		j++;
		k++;
	}
}

template <class T>
void mergeSort(Array_List<T> arr_list, int l, int r)
{
	if (l < r)
	{
		int m = l + (r - l) / 2;

		mergeSort(arr_list, l, m);
		mergeSort(arr_list, m + 1, r);

		merge(arr_list, l, m, r);
	}
}
