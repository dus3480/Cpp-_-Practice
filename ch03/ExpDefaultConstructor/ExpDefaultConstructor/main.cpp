// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
void dyPrint(string str) {
	cout << str << endl;
}
void dyPrint(int n) {
	cout << n << endl;
}
void dyPrint(string str, int n) {
	cout << str << n << endl;
}
class CTest
{
public:
	CTest(void)=default;
	int m_nData = 5;
};

int _tmain(int argc,_TCHAR argv[])
{
	CTest a;
	dyPrint(a.m_nData);
	return 0;
}
/*
CTest::CTest(void)
{
}
*/
