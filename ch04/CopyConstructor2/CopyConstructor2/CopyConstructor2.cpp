// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
class CTest
{
public:
	CTest():m_nData(0) { dyPrint("Ctest"); }
	int GetData() { return  m_nData; }
	void SetData(int np) { m_nData = np; }
	~CTest() {}
private:
	int m_nData;
};

int _tmain(int argc,_TCHAR argv[])
{
	CTest a;
	a.SetData(10);

	CTest b(a);//���� ������ �����������µ� �� ������ �ȳ���.. ������ �ʹ� ª�� 
	dyPrint("\n",b.GetData());

	return 0;
}
