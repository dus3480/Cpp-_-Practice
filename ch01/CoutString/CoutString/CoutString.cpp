// CoutString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

int _tmain()
{
	using namespace std;
	string strData = "Test string";
	cout << "Sample string" << endl;
	cout << strData << endl;
	strData = "New string";
	cout << strData << endl;
	cout << "저는 " << 20 << "살" << "입니다" << endl;

    return 0;
}

