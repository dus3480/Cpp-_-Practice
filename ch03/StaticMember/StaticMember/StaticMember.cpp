// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
class CTest
{
public:
	CTest(int np) :m_nData(np) { m_nCount++; }
	~CTest() {}
	void ResetCount() { m_nCount = 0; }
	int GetData() { return m_nData; }
	static int GetCount() { return m_nCount; }
private:
	int m_nData;
	static int m_nCount;//����
};

int CTest::m_nCount = 0; //���� ������� ����

int _tmain(int argc,_TCHAR argv[])
{
	CTest a(4), b(3);
	dyPrint(a.GetCount());
	dyPrint("\n");

	//b.ResetCount();
	dyPrint(b.GetCount());
	dyPrint("\n");

	dyPrint(a.GetCount());
	dyPrint("\n");

	dyPrint(CTest::GetCount());;
	//m_ncount�� ����������� ��Ÿƽ���� �����Ͽ� ������ ������ ��������ó�� ��޹޴´�.
	return 0;
}
