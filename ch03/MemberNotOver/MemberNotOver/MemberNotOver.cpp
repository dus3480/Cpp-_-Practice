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
	TF(4.3);//�����Ͱ� �߸��ٰ� ����� �����ϴµ� ����� �ȶ�� �ֱ׷��� ..����
	return 0;
}
