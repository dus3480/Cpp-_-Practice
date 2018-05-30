// 06.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void buuble_sort(int a[], int size) {
	int tmp;

	for (int i = 0; i < size - 1; i++) {
		for (int j = i + 1; j < size; j++) {
			if (a[i] > a[j]) {
				tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}
int main() {
	int a[] = { 15, 2, 24, 18, 7, 13, 12, 4, 21, 9 };
	buuble_sort(a, sizeof(a) / sizeof(int));
	for (auto i : a) {
		cout << i << ' ';
	}
	cout << endl;
	return 0;
}