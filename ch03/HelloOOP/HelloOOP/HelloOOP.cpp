// HelloOOP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdio>
class USERDATA {
public:
	int nAge;
	char szName[32];

	void Print(void) {
		printf("%d, %s\n", nAge, szName);
	}
};

int _tmain(int argc,_TCHAR* argv[])
{
	USERDATA user = { 19,"Ã¶¼ö" };
	user.Print();
    return 0;
}

