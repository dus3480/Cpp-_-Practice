// 01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	char name[20];//왜 string 으로 하면 오류가 날까?
	int age;
	cout << "이름 :"; cin >> name;
	cout << endl; 
	
	cout << "나이 :"; cin >> age;
	cout << endl;

	cout << "나의 이름은 " << name << "이고 " << age << "살 입니다." << endl;
	
    return 0;
}

