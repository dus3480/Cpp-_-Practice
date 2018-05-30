// IdSearchSeq3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int nData = 200;

namespace TEST {
	int nData = 100;
	void TEstFunc(void) {
		cout << nData << endl;
	}
}

int _tmain(int argc, _TCHAR* argv[])
{
	TEST::TEstFunc();
    return 0;
}

