// ClassNew.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void print(string str)
{
	cout << str << endl;
}
void print(string str, int n) {
	cout << str << n << endl;
}

class CTest {
	int m_nData;
public:
	CTest() { print("CTest()"); }
	CTest(int nParam) : m_nData(nParam)
	{
		print("CTest()");
	}
	~CTest()
	{
		//print("~CTest()", m_nData);
		print("~CTest()");
	}
};


int main()
{
	print("Begin");
	CTest *pData = new CTest[3];
	print("test");
	delete[] pData;
	print("End");
	return 0;
}

