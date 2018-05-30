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
	void SetData(double np) = delete;//double 형이 들어오면 삭제 
	//double형이 들어오면 안되는 함수라면 이렇게 해서 오류에대해 원천봉쇄하는것이 매우 바람직하다고한다.
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
	//b.SetData(2.1);// 삭제된 펑션이라며 오류가 뜬다 
	////attempting to referentce a deleted function 
	//dyPrint(b.GetData());

	return 0;
}
