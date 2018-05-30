// ReferenceType.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int nData = 10;

	int &ref = nData;
	ref = 20;
	cout << nData << endl;
	int * pnData = &ref;
	*pnData = 30;
	cout << nData << endl;
	int * ppnData = &nData;
	*ppnData = 40;
	cout << nData << endl;
    return 0;
}

