// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
void TF(int np)
{
	dyPrint(np);
	dyPrint("\n");
}

int _tmain(int argc,_TCHAR argv[])
{
	TF(10);
	TF(4.3);//데이터가 잘린다고 경고문이 떠야하는데 경고문이 안뜬다 왜그럴까 ..망할
	return 0;
}
