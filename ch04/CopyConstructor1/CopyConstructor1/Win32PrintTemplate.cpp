// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
class CTest
{
public:
	CTest() {
		dyPrint("CTest class \n");
	}
	CTest(const CTest &rhs) {
		this->m_nData = rhs.m_nData;
		dyPrint("Ctest(const cTest &rhs) 실행\n");
	}
	~CTest() {}
	int GetData()const
	{
		return m_nData;
	}
	void SetData(int nP)
	{
		m_nData = nP;
	}
private:
	int m_nData = 0;
};

int _tmain(int argc,_TCHAR argv[])
{
	CTest a;
	a.SetData(10);

	CTest b(a);// 복사 생성자 호출 
	dyPrint(b.GetData());

	return 0;
}
