// CinString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdio>
#include <string>

int _tmain()
{
	using namespace std;
	int nAge;
	char szJob[32];
	string strName;

	cout << "나이를 입력하세요" << endl;
	cin >> nAge;

	cout << "직업을 입력 하세요." << endl;
	cin >> szJob;

	cout << "이름을 입력 하세요." << endl;
	cin >> strName;
	cout << "당신의 이름은 " << strName << "이고, "
		<< "나이는 " << nAge << "살이며, "
		<< "직업은 " << szJob << "입니다." << endl;

    return 0;
}

