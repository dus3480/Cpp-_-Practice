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
		m_nData = 20; //mutalbe �� ���� ������ const������ ���Ⱑ ����������. ������ ��������
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
