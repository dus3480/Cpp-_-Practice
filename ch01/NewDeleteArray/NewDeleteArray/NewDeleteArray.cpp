// NewDeleteArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int *arr = new int[5];
	for (int i = 0; i < 5; i++) arr[i] = (i + 1) * 10;
	for (int i = 0; i < 5; i++) cout << arr[i] << endl;

	delete[] arr;// �迭 ���·� �����Ѵ���� �ݵ�� �迭 ���¸� ���� �����Ѵ�!!!!!

    return 0;
}

