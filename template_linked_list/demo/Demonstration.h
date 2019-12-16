#pragma once
#include <iostream>
#include "../date/DateTime.h"
#include "../lists/linked-list.h"
#include "../lists/array-list.h"
#include "../sorts/insertion_sort.h"
#include "../sorts/merge_sort.h"
#include "../sorts/quick_sort.h"

using namespace std;

class Demonstration {
public:
	void Linked_list_menu() {
		cout << " ========================== Linked_list ========================= " << endl;
		cout << "Which test do u want to do? \n Please chose one of variants below!" << endl;
		cout << "1) Linked_list with integers" << endl;
		cout << "2) Linked_list with doubles" << endl;
		cout << "3) Linked_list with strings" << endl;
		cout << "4) Linked_list with vectors" << endl;
		cout << "5) Back" << endl;
		int type = 0;
		cin >> type;
		system("cls");
		if (type == 1) {
			vector<int> v = { 1, 3, 4, 2 };
			Linked_List<int> list(v);
			cout << "Before sorting: ";
			for (int i = 0; i < list.GetSize(); i++) {
				cout << list[i] << " ";
			}
			insertionSort(list);
			cout << endl << "After sorting: ";
			for (int i = 0; i < list.GetSize(); i++) {
				cout << list[i] << " ";
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Linked_list_menu();
		}
		else if (type == 2) {
			vector<double> v = { 1.5, 3.2, 4.1, 2.9 };
			Linked_List<double> list(v);
			cout << "Before sorting: ";
			for (int i = 0; i < list.GetSize(); i++) {
				cout << list[i] << " ";
			}
			insertionSort(list);
			cout << endl << "After sorting: ";
			for (int i = 0; i < list.GetSize(); i++) {
				cout << list[i] << " ";
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Linked_list_menu();
		}
		else if (type == 3) {
			vector<string> v = { "1", "3", "4", "2" };
			Linked_List<string> list(v);
			cout << "Before sorting: ";
			for (int i = 0; i < list.GetSize(); i++) {
				cout << list[i] << " ";
			}
			insertionSort(list);
			cout << endl << "After sorting: ";
			for (int i = 0; i < list.GetSize(); i++) {
				cout << list[i] << " ";
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Linked_list_menu();
		}
		else if (type == 4) {
			vector<int> v1 = { 1, 3, 4, 2 };
			vector<int> v2 = { 1, 1, 4, 2 };
			vector<int> v3 = { 1, 2, 4, 2 };
			vector<vector<int>> vv = { v1, v2, v3 };
			Linked_List<vector<int>> list(vv);
			cout << "Before sorting: ";
			for (int i = 0; i < list.GetSize(); i++) {
				cout << i + 1 << " vector: ";
				for (int j = 0; j < list[i].size(); j++) {
					cout << list[i][j] << " ";
				}
				cout << endl;
			}
			insertionSort(list);
			cout << endl << "After sorting: ";
			for (int i = 0; i < list.GetSize(); i++) {
				cout << i + 1 << " vector: ";
				for (int j = 0; j < list[i].size(); j++) {
					cout << list[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Linked_list_menu();
		}
		else if (type == 5) {
			system("cls");
			Run();
		}
		else {
			system("cls");
			Linked_list_menu();
		}
	}
	void Array_list_menu() {
		cout << " ========================== Array_list ========================== " << endl;
		cout << "Which test do u want to do? \n Please chose one of variants below!" << endl;
		cout << "1) Array_list with integers" << endl;
		cout << "2) Array_list with doubles" << endl;
		cout << "3) Array_list with strings" << endl;
		cout << "4) Array_list with vectors" << endl;
		cout << "5) Back" << endl;
		int type = 0; 
		cin >> type;
		system("cls");
		if (type == 1) {
			vector<int> v = { 1, 3, 4, 2 };
			Array_List<int> arr_list(v);
			cout << "Before sorting: ";
			for (int i = 0; i < arr_list.GetSize(); i++) {
				cout << arr_list[i] << " ";
			}
			insertionSort(arr_list);
			cout << endl << "After sorting: ";
			for (int i = 0; i < arr_list.GetSize(); i++) {
				cout << arr_list[i] << " ";
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Array_list_menu();
		}
		else if (type == 2) {
			vector<double> v = { 1.5, 3.2, 4.1, 2.9 };
			Array_List<double> arr_list(v);
			cout << "Before sorting: ";
			for (int i = 0; i < arr_list.GetSize(); i++) {
				cout << arr_list[i] << " ";
			}
			insertionSort(arr_list);
			cout << endl << "After sorting: ";
			for (int i = 0; i < arr_list.GetSize(); i++) {
				cout << arr_list[i] << " ";
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Array_list_menu();
		}
		else if (type == 3) {
			vector<string> v = { "1", "3", "4", "2" };
			Array_List<string> arr_list(v);
			cout << "Before sorting: ";
			for (int i = 0; i < arr_list.GetSize(); i++) {
				cout << arr_list[i] << " ";
			}
			insertionSort(arr_list);
			cout << endl << "After sorting: ";
			for (int i = 0; i < arr_list.GetSize(); i++) {
				cout << arr_list[i] << " ";
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Array_list_menu();
		}
		else if (type == 4) {
			vector<int> v1 = { 1, 3, 4, 2 };
			vector<int> v2 = { 1, 1, 4, 2 };
			vector<int> v3 = { 1, 2, 4, 2 };
			vector<vector<int>> vv = { v1, v2, v3 };
			Array_List<vector<int>> arr_list(vv);
			cout << "Before sorting: ";
			for (int i = 0; i < arr_list.GetSize(); i++) {
				cout << i + 1 << " vector: ";
				for (int j = 0; j < arr_list[i].size(); j++) {
					cout << arr_list[i][j] << " ";
				}
				cout << endl;
			}
			insertionSort(arr_list);
			cout << endl << "After sorting: ";
			for (int i = 0; i < arr_list.GetSize(); i++) {
				cout << i + 1 << " vector: ";
				for (int j = 0; j < arr_list[i].size(); j++) {
					cout << arr_list[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Array_list_menu();
		}
		else if (type == 5) {
			system("cls");
			Run();
		}
		else {
			system("cls");
			Array_list_menu();
		}
	}
	void Vector_menu() {
		cout << " ============================ Vector ============================ " << endl;
		cout << "Which test do u want to do? \n Please chose one of variants below!" << endl;
		cout << "1) Vector with integers" << endl;
		cout << "2) Vector with doubles" << endl;
		cout << "3) Vector with strings" << endl;
		cout << "4) Vector with vectors" << endl;
		cout << "5) Back" << endl;
		int type = 0; 
		cin >> type;
		system("cls");
		if (type == 1) {
			vector<int> v = { 1, 3, 4, 2 };
			cout << "Before sorting: ";
			for (int i = 0; i < v.size(); i++) {
				cout << v[i] << " ";
			}
			insertionSort(v);
			cout << endl << "After sorting: ";
			for (int i = 0; i < v.size(); i++) {
				cout << v[i] << " ";
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Vector_menu();
		}
		else if (type == 2) {
			vector<double> v = { 1.5, 3.2, 4.1, 2.9 };
			cout << "Before sorting: ";
			for (int i = 0; i < v.size(); i++) {
				cout << v[i] << " ";
			}
			insertionSort(v);
			cout << endl << "After sorting: ";
			for (int i = 0; i < v.size(); i++) {
				cout << v[i] << " ";
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Vector_menu();
		}
		else if (type == 3) {
			vector<string> v = { "1", "3", "4", "2" };
			cout << "Before sorting: ";
			for (int i = 0; i < v.size(); i++) {
				cout << v[i] << " ";
			}
			insertionSort(v);
			cout << endl << "After sorting: ";
			for (int i = 0; i < v.size(); i++) {
				cout << v[i] << " ";
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Vector_menu();
		}
		else if (type == 4) {
			vector<int> v1 = { 1, 3, 4, 2 };
			vector<int> v2 = { 1, 1, 4, 2 };
			vector<int> v3 = { 1, 2, 4, 2 };
			vector<vector<int>> vv = { v1, v2, v3 };
			cout << "Before sorting: ";
			for (int i = 0; i < vv.size(); i++) {
				cout << i + 1 << " vector: ";
				for (int j = 0; j < vv[i].size(); j++) {
					cout << vv[i][j] << " ";
				}
				cout << endl;
			}
			insertionSort(vv);
			cout << endl << "After sorting: ";
			for (int i = 0; i < vv.size(); i++) {
				cout << i + 1 << " vector: ";
				for (int j = 0; j < vv[i].size(); j++) {
					cout << vv[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			system("pause>nul");
			system("cls");
			Vector_menu();
		}
		else if (type == 5) {
			system("cls");
			Run();
		}
		else {
			system("cls");
			Vector_menu();
		}
	}
	void Run() {
		cout << "Hello! Do u want to do some test? \nPlease chose one of the variants below!" << endl;
		cout << "1) Linked_list \n2) Array_list \n3) Vector \n0) Exit" << endl;
		int list = 0;
		cin >> list;
		system("cls");
		if (list == 1) {
			Linked_list_menu();
		}
		else if (list == 2) {
			Array_list_menu();
		}
		else if (list == 3) {
			Vector_menu();
		}
		else if (list == 0) {
			return;
		}
		else {
			system("cls");
			Run();
		}

	}
};