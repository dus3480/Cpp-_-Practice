// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
class CTest
{
public:
	CTest(int np) {
		m_pD = new int;
		*m_pD = np;
	}
	CTest(const CTest &rhs) {
		m_pD = new int;
		*m_pD = *rhs.m_pD; //깊은 복사
	}
	~CTest() {
		delete m_pD;
	}
	int GetData() { 
		if(m_pD != NULL) return *m_pD;
		return 0;
	}
	CTest& operator=(const CTest &rhs)
	{
		*m_pD = *rhs.m_pD;
		return *this;
	}
private:
	int * m_pD = nullptr;
};

int _tmain(int argc,_TCHAR argv[])
{
	CTest a(10);
	CTest b(20);

	a = b; //기본은 얕은복사가 수행됨 연산자 다중정의로 깊은복사로 변경

	dyPrint(a.GetData());
	dyPrint("\n",b.GetData());
	return 0;
	//이런'' ShallowCopy2에다가 새로 쓰는거였다. 
}
