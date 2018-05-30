// ConstructorOver2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
void dyPrint(string str) {
	cout << str << endl;
}
void dyPrint(string str, int n) {
	cout << str << n << endl;
}
class CPoint
{
	int m_x = 0;
	int m_y = 0;
public:
	CPoint(int x)
	{
		dyPrint("CPrint(int)");
		if (x > 100) m_x = 100;
	}
	CPoint(int x, int y)
		:CPoint(x)
	{
		dyPrint("CPrint(int,int)");
		if (y > 200) m_y = 200;
	}
	void printData() {
		dyPrint("x: ", m_x);
		dyPrint("y: ", m_y);
	}
};

int main()
{
	CPoint ptBegin(110);
	ptBegin.printData();

	CPoint ptEnd(50, 250);
	ptEnd.printData();
    return 0;
}

