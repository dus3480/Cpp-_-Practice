// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

int _tmain(int argc,_TCHAR argv[])
{
	int *pA, *pB;
	pA = new int;
	*pA = 10;

	pB = new int;
	pB = pA; //���� ����

	dyPrint(*pA);
	dyPrint(*pB);

	delete pA;
	//delete pB;// pA�� �����Ǹ� pB�� pA�� �����ϰ��־��⿡ �̹� �����ǹ���. �׷��� ����Ʈ�� �θ��� ���³� �ֺθ��İ� ���� �߻�

	return 0;
}
