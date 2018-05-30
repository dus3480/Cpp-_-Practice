// RefSample.cpp : Defines the entry point for the console application.
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

class CRefTest {
	int &m_nData;
public:
	CRefTest(int &rParam) : m_nData(rParam)
	{
		print("CTest()");
	}
	~CRefTest()
	{
		//print("~CTest()", m_nData);
		print("~CTest()");
	}
	int GetData(void) { return m_nData; }
};


int main()
{
	int a = 10;
	CRefTest t(a);

	print("",t.GetData());

	a = 20;
	print("",t.GetData());
	return 0;
}

