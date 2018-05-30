// RangeBasedfor.cpp : Defines the entry point for the console application.
//
//그냥 포이치문...
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int aList[] = { 10,20,30,40,50 };
	char *a = new char[12];

	for (int i = 0; i < 5; i++) cout << aList[i] << ' ';
	cout << endl;
	
	for (auto n : aList) cout << n << ' ';//요소값을 n에 복사
	cout << endl;

	for (auto &n : aList)cout << n << ' ';//n은 각 요소의 참조
	cout << endl;

    return 0;
}

