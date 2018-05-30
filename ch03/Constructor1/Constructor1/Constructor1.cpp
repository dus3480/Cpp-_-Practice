// Constructor1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

void print(string str)
{
	cout << str << endl;
}

class CTest {
public:
	CTest()
	{
		print("CTest()");
	}
	~CTest()
	{
		print("~CTest()");
	}
};


int main()
{
	print("Begin");
	CTest a;
	print("End");
    return 0;
}

