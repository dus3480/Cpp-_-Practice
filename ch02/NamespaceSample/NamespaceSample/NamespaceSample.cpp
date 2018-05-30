// NamespaceSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

namespace TEST {
	int g_nData = 100;

	void TestFunc(void) {
		std::cout << TEST::g_nData << std::endl;
	}
}
int _tmain()
{
	std::cout << TEST::g_nData << std::endl;
    return 0;
}

