// 04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void Swap(int &a,int &b) {
	int temp = a;
	a = b;
	b = temp;
}
int main()
{
	int c = 5;
	int f = 6;
	cout << c << f << endl;
	Swap(c, f);
	cout << c << f << endl;
    return 0;
}

