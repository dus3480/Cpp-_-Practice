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
	
	CTest(const CTest &rhs) = delete; //복사 생성자를 원천봉쇄

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
//	clpar.SetData(30);//참조 형식이 아닌데 바꾸는게 적용되나? re- 적용 당연히 안됨
//}
void TestFunc(CTest &c) { //참조자 버전
//void TestFunc(const CTest &c) { //함수의 매개변수가 클래스일경우 const를 붙여주는게 정석 만약 쓰기가 필요할경우 다른방안을 찾아야할듯
	dyPrint("TestFunc(Ctest &)\n");
	//c.SetData(20); const- set불가
}
int _tmain(int argc,_TCHAR argv[])
{
	CTest a(10);
	TestFunc(a);

	//CTest b(a);//복사생성자를 막아놔서 오류 발생
	//Severity	Code	Description	Project	File	Line	Suppression State
	//	Error	C2280	'CTest::CTest(const CTest &)': attempting to reference a deleted function	Win32PrintTemplateFunctionAndClass	d : \cpppractice\cpp - _ - practice\ch04\win32printtemplatefunctionandclass\win32printtemplatefunctionandclass\functionandclass.cpp	40

	dyPrint("a: ", a.GetData()); 
	dyPrint("\n");
	return 0;
}
