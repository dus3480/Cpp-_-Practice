// Win32PrintTemplate.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
class CTest
{
public:
	CTest(int nP):
		m_nData(nP)
	{
		dyPrint("c(int)\n");
	}
	/*CTest(const CTest &rhs) :
		m_nData(rhs.m_nData)
	{
		dyPrint("c(const CTest &)\n");
	}*/
	
	CTest(const CTest &rhs) = delete; //���� �����ڸ� ��õ����

	~CTest() {}
	int GetData() const {
		return m_nData;
	}
	void SetData(int np) {
		m_nData = np;
	}
private:
	int m_nData = 0;
};
//void TestFunc(CTest clpar)
//{
//	dyPrint("TestFunc\n");
//	clpar.SetData(30);//���� ������ �ƴѵ� �ٲٴ°� ����ǳ�? re- ���� �翬�� �ȵ�
//}
void TestFunc(CTest &c) { //������ ����
//void TestFunc(const CTest &c) { //�Լ��� �Ű������� Ŭ�����ϰ�� const�� �ٿ��ִ°� ���� ���� ���Ⱑ �ʿ��Ұ�� �ٸ������ ã�ƾ��ҵ�
	dyPrint("TestFunc(Ctest &)\n");
	//c.SetData(20); const- set�Ұ�
}
int _tmain(int argc,_TCHAR argv[])
{
	CTest a(10);
	TestFunc(a);

	//CTest b(a);//��������ڸ� ���Ƴ��� ���� �߻�
	//Severity	Code	Description	Project	File	Line	Suppression State
	//	Error	C2280	'CTest::CTest(const CTest &)': attempting to reference a deleted function	Win32PrintTemplateFunctionAndClass	d : \cpppractice\cpp - _ - practice\ch04\win32printtemplatefunctionandclass\win32printtemplatefunctionandclass\functionandclass.cpp	40

	dyPrint("a: ", a.GetData()); 
	dyPrint("\n");
	return 0;
}
