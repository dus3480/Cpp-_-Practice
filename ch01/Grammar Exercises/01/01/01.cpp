// 01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char name[20];//�� string ���� �ϸ� ������ ����?
	int age;
	cout << "�̸� :"; cin >> name;
	cout << endl; 
	
	cout << "���� :"; cin >> age;
	cout << endl;

	cout << "���� �̸��� " << name << "�̰� " << age << "�� �Դϴ�." << endl;
	
    return 0;
}

