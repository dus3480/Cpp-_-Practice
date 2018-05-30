// ReferenceSwap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
void Swap(int &a, int &b) {
	int nTemp = a;
	a = b;
	b = nTemp;
}
int main()
{
	int x = 10, y = 20;

	Swap(x, y);

	cout << x << endl;
	cout << y << endl;

    return 0;
}

