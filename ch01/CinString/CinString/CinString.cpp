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

	cout << "���̸� �Է��ϼ���" << endl;
	cin >> nAge;

	cout << "������ �Է� �ϼ���." << endl;
	cin >> szJob;

	cout << "�̸��� �Է� �ϼ���." << endl;
	cin >> strName;
	cout << "����� �̸��� " << strName << "�̰�, "
		<< "���̴� " << nAge << "���̸�, "
		<< "������ " << szJob << "�Դϴ�." << endl;

    return 0;
}

