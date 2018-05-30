// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

int _tmain(int argc,_TCHAR argv[])
{
	int *pA, *pB;
	pA = new int;
	*pA = 10;

	pB = new int;
	pB = pA; //얕은 복사

	dyPrint(*pA);
	dyPrint(*pB);

	delete pA;
	//delete pB;// pA가 삭제되면 pB는 pA를 참조하고있었기에 이미 삭제되버림. 그래서 딜리트를 부르면 없는놈 왜부르냐고 오류 발생

	return 0;
}
