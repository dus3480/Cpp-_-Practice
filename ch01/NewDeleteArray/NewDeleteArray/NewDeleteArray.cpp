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

	delete[] arr;// 배열 형태로 생성한대상은 반드시 배열 형태를 통해 삭제한다!!!!!

    return 0;
}

