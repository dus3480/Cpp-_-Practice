// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
void TestFunc(const int &nP)
{
	int &nP2 = const_cast<int &>(nP);
	nP2 = 100;
}
int _tmain(int argc,_TCHAR argv[])
{
	int nD = 10;
	TestFunc(nD);
	dyPrint(nD);
	return 0;
}
