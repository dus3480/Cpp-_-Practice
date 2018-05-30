// ConstructorOber1.cpp : Defines the entry point for the console application.
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
	CTest(int nParam):m_nData(nParam){ }
	CTest(int x, int y) :m_nData(x + y) {}
	~CTest()
	{
		//print("~CTest()", m_nData);
		print("~CTest()");
	}
	int GetData(void) { return m_nData; }
};


int main()
{
	CTest a(10);
	CTest b(3, 4);
	print("", a.GetData());
	print("", b.GetData());
	return 0;
}

