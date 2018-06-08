// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
class CTest
{
public:
	explicit CTest(int nP): m_nData(nP) {
		dyPrint("CTest(np)\n");
	}
	CTest(const CTest &rhs) : m_nData(rhs.m_nData) {
		dyPrint("CTest &rhs\n");
	}
	~CTest() {}
	int GetData() const { return m_nData; }
	void SetData(int np) { m_nData = np; }
private:
	int m_nData = 0;
};

void TestFunc(CTest p)
{
	dyPrint("TestFunc(): "); dyPrint(p.GetData()); dyPrint("\n");
}
int _tmain(int argc,_TCHAR argv[])
{
	TestFunc(CTest(5));
	return 0;
}
