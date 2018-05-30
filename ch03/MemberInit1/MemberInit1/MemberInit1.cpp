// MemberInit1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class CTest {
public:
	CTest() {
		m_nData = 10;
	}
	int m_nData;

	void PrintData(void) {
		std::cout << m_nData << std::endl;
	}
};

int main()
{
	CTest t;
	t.PrintData();
    return 0;
}

