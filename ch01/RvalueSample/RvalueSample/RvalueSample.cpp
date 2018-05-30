// RvalueSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int TestFunc(int nParam)
{
	int nResult = nParam * 2;

	return nResult;
}

int main()
{
	int nInput = 0;
	cout << "input number: ";
	cin >> nInput;

	//r-value참조는 이제 곧 사라질 대상에 대해 참조자를 부여한다.?
	int &&rdata = nInput + 5;
	cout << rdata << endl;

	int &&result = TestFunc(10);
	result += 10;

    return 0;
}

