// MemberInit3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		cout << "CTest() : 생성자 함수 " << endl;
		m_nData = 10;
	}
	int m_nData;

	void PrintData(void);
};
void CTest::PrintData(void) {
	std::cout << m_nData << std::endl;
}
int main()
{
	cout << "main함수 시작 " << endl;
	CTest t;
	t.PrintData();
	cout << "main함수 끝";
	return 0;
}

