// RangeBasedfor.cpp : Defines the entry point for the console application.
//
//�׳� ����ġ��...
#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int aList[] = { 10,20,30,40,50 };
	char *a = new char[12];

	for (int i = 0; i < 5; i++) cout << aList[i] << ' ';
	cout << endl;
	
	for (auto n : aList) cout << n << ' ';//��Ұ��� n�� ����
	cout << endl;

	for (auto &n : aList)cout << n << ' ';//n�� �� ����� ����
	cout << endl;

    return 0;
}

