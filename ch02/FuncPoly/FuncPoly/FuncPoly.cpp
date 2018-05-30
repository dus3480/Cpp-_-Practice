// FuncPoly.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int Add(int a, int b, int c) {
	return a + c + b;
}
int Add(int a, int b) {
	return a + b;
}
double Add(double a, double b) {
	return a + b;
}
int main()
{
	cout << Add(3, 4) << endl;
	cout << Add(3, 4,5) << endl;
	cout << Add(3.3, 4.4) << endl;
    return 0;
}

