// MemberInit3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CTest {
public:
	CTest() {
		cout << "CTest() : ������ �Լ� " << endl;
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
	cout << "main�Լ� ���� " << endl;
	CTest t;
	t.PrintData();
	cout << "main�Լ� ��";
	return 0;
}

