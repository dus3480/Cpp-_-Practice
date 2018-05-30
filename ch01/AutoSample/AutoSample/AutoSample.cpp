// AutoSample.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int _tmain()
{
	int a = 10;
	int b(a);
	auto c(b);

	std::cout << a + b + c << std::endl;
    return 0;
}

