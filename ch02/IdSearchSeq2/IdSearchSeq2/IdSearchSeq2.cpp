// IdSearchSeq2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain()
{
	int nInput = 0;
	cout << "11 이상의 정수를 입력 하세요." << endl;
	cin >> nInput;
	if (nInput > 10) {
		cout << nInput << endl;
	}
	else {
		cout << "error" << endl;
	}
    return 0;
}

