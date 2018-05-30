// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
class CTest
{
public:
	CTest(int nParam) :m_nData(nParam) {}
	~CTest() {}
	int GetData() const
	{
		m_nData = 20; //mutalbe 을 붙인 변수는 const일지라도 쓰기가 가능해진다. 하지만 자제하자
		return m_nData;
	}
	int setData(int nP)
	{
		m_nData = nP;
	}
private:
	mutable int m_nData = 0;
};

int _tmain(int argc, _TCHAR argv[])
{
	CTest a(10);
	dyPrint(a.GetData());
	return 0;
}
