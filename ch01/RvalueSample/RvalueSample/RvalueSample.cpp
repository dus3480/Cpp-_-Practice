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

	//r-value������ ���� �� ����� ��� ���� �����ڸ� �ο��Ѵ�.?
	int &&rdata = nInput + 5;
	cout << rdata << endl;

	int &&result = TestFunc(10);
	result += 10;

    return 0;
}

