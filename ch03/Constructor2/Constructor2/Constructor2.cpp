// Constructor2.cpp : Defines the entry point for the console application.
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
	cout << str << n <<endl;
}

class CTest {
	int m_nData;
public:
	CTest(int nParam): m_nData(nParam)
	{
		print("CTest()");
	}
	~CTest()
	{
		print("~CTest()", m_nData);
	}
};


int main()
{
	print("Begin");
	CTest a(1);
	print("Before b");
	CTest b(2);
	print("End");
	return 0;
}

