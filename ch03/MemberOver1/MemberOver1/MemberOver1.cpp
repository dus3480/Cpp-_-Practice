// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
class CTest
{
public:
	CTest() :m_nData(0) {}
	int GetData(void) const
	{
		return m_nData;
	}
	void SetData(int np)//int
	{
		m_nData = np;
	}
	void SetData(double np)//double 실수가 들어오면 0
	{
		m_nData = 0;
	}
	~CTest() {}
private:
	int m_nData;
};

int _tmain(int argc,_TCHAR argv[])
{
	CTest a, b;
	a.SetData(10);
	dyPrint(a.GetData());

	dyPrint("\n");

	b.SetData(2.1);
	dyPrint(b.GetData());

	return 0;
}
