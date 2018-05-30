// DefaultParam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int TestFunc(int nParam = 10) {
	return nParam;
}
int main()
{
	cout << TestFunc() << endl;
	cout << TestFunc(20) << endl;
    return 0;
}

