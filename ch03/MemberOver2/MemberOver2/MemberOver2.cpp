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
	void SetData(double np) = delete;//double ���� ������ ���� 
	//double���� ������ �ȵǴ� �Լ���� �̷��� �ؼ� ���������� ��õ�����ϴ°��� �ſ� �ٶ����ϴٰ��Ѵ�.
	~CTest() {}
private:
	int m_nData;
};

int _tmain(int argc, _TCHAR argv[])
{
	CTest a;
	a.SetData(10);
	dyPrint(a.GetData());

	dyPrint("\n");

	//CTest b;
	//b.SetData(2.1);// ������ ����̶�� ������ ��� 
	////attempting to referentce a deleted function 
	//dyPrint(b.GetData());

	return 0;
}
