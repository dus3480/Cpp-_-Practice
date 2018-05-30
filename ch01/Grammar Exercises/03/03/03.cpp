// 03.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char *a = new char[12];
	cin >> a;
	cout << a << endl;
	delete[] a;
    return 0;
}

