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
class CmyData
{
	int ndata;
public:
	CmyData(int nP) :ndata(nP) {};
	void PrintData() {
		dyPrint(ndata);
		dyPrint(CmyData::ndata);
		dyPrint(this->ndata);
		dyPrint(this->CmyData::ndata);
	}
};
int _tmain(int argc,_TCHAR argv[])
{
	CmyData a(5), b(10);
	a.PrintData();
	b.PrintData();
	return 0;
}
