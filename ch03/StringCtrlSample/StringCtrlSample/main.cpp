// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include "MyString.h"

int _tmain(int argc,_TCHAR argv[])
{
	CMyString strData;
	strData.SetString("HelloWorld");
	cout << strData.GetString();
	return 0;
}
