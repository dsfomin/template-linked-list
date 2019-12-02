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
	template <typename T>
	//void Sort_linked_list(Linked_List<T> l) {
	//	cout << "\nHow do u want to sort this list?\n Please chose one of variants below!" << endl;
	//	cout << "1) Insertion sort" << endl;
	//	cout << "2) Quick sort" << endl;
	//	cout << "3) Merge sort" << endl;
	//	int sort = 0;
	//	if (sort == 1) {
	//		cout << "List: " << endl;
	//		for (int i = 0; i < l.GetSize(); i++) {
	//			cout << l[i] << endl;
	//		}
	//		cout << "Sorting..." << endl;
	//		//Insertion_sort(l);
	//		cout << "Sorted List: " << endl;
	//		for (int i = 0; i < l.GetSize(); i++) {
	//			cout << l[i] << endl;
	//		}
	//	}
	//	if (sort == 2) {
	//		cout << "List: " << endl;
	//		for (int i = 0; i < l.GetSize(); i++) {
	//			cout << l[i] << endl;
	//		}
	//		cout << "Sorting..." << endl;
	//		//Quick_sort(l);
	//		cout << "Sorted List: " << endl;
	//		for (int i = 0; i < l.GetSize(); i++) {
	//			cout << l[i] << endl;
	//		}
	//	}
	//	if (sort == 3) {
	//		cout << "List: " << endl;
	//		for (int i = 0; i < l.GetSize(); i++) {
	//			cout << l[i] << endl;
	//		}
	//		cout << "Sorting..." << endl;
	//		//Merge_sort(l);
	//		cout << "Sorted List: " << endl;
	//		for (int i = 0; i < l.GetSize(); i++) {
	//			cout << l[i] << endl;
	//		}
	//	}
	//}
	void Linked_list_int() {
		cout << " ===== Linked_list_with_integers ===== " << endl;
		cout << "Which test do u want to do? \n Please chose one of variants below!" << endl;
		cout << "1) Set some count of values?" << endl;
		cout << "2) Randomize some count of values?" << endl;
		cout << "3) Back" << endl;
		int type = 0;
		cin >> type;
		system("cls");
		if (type == 0) {
			Linked_list_menu();
		}
		else if (type == 1) {
			Linked_List<int> l;
			int n = 0, val = 0;
			cout << "How many values do u want to set?" << endl;
			cin >> n;
			for (int i = 0; i < n; i++) {
				cout << i + 1 << ") Set value: ";
				cin >> val;
				cout << endl;
				l.push_back(val);
			}
			system("cls");
			//Sort_linked_list(l);
		}
		else if (type == 2) {
			Linked_List<int> l;
			int n = 0;
			cout << "How many values do u want to randomize?" << endl;
			cin >> n;
			for (int i = 0; i < n; i++) {
				l.push_back(rand() % 100);
			}
			system("cls");
			//Sort_linked_list(l);
		}

	}
	void Linked_list_menu() {
		cout << " ========================== Linked_list ========================= " << endl;
		cout << "Which test do u want to do? \n Please chose one of variants below!" << endl;
		cout << "1) Linked_list with integers" << endl;
		cout << "2) Linked_list with doubles" << endl;
		cout << "3) Linked_list with strings" << endl;
		cout << "4) Linked_list with vectors" << endl;
		cout << "5) Linked_list with vectors of vectors" << endl;
		cout << "6) Back" << endl;
		int type = 0;
		cin >> type;
		system("cls");
		if (type == 1 || type == 2 || type == 3 || type == 4 || type == 5) {
			//switch (type) {
			//case 1:
			//	Linked_list_int();
			////case 2:
			////case 3:
			////case 4:
			////case 5:
			//}
		}
	}
	void Array_list_menu() {
		cout << " ========================== Array_list ========================== " << endl;
		cout << "Which test do u want to do? \n Please chose one of variants below!" << endl;
		cout << "1) Array_list with integers" << endl;
		cout << "2) Array_list with doubles" << endl;
		cout << "3) Array_list with strings" << endl;
		cout << "4) Array_list with vectors" << endl;
		cout << "5) Array_list with vectors of vectors" << endl;
		cout << "6) Back" << endl;
		int type = 0; 
		cin >> type;
		system("cls");
		if (type == 1 || type == 2 || type == 3 || type == 4 || type == 5) {
			//switch (type) {
			//case 1:
			//case 2:
			//case 3:
			//case 4:
			//case 5:
			//}
		}
	}
	void Vector_menu() {
		cout << " ============================ Vector ============================ " << endl;
		cout << "Which test do u want to do? \n Please chose one of variants below!" << endl;
		cout << "1) Vector with integers" << endl;
		cout << "2) Vector with doubles" << endl;
		cout << "3) Vector with strings" << endl;
		cout << "4) Vector with vectors" << endl;
		cout << "5) Vector with vectors of vectors" << endl;
		cout << "6) Back" << endl;
		int type = 0; 
		cin >> type;
		system("cls");
		if (type == 1 || type == 2 || type == 3 || type == 4 || type == 5) {
			//switch (type) {
			//case 1:
			//case 2:
			//case 3:
			//case 4:
			//case 5:
			//}
		}
	}
	void Run() {
		cout << "Hello! Do u want to do some test? \nPlease chose one of the variants below!" << endl;
		cout << "1) Linked_list \n2) Array_list \n3) Vector" << endl;
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
	}
};