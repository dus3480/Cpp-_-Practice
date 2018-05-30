// CallByReference.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void TestFunc(int &rParam) {
	rParam = 100;
}
int main()
{
	int nData = 0;

	TestFunc(nData);
	cout << nData << endl;
    return 0;
}

