#include <stdio.h>

typedef struct USERDATA {
	int nAge;
	char szNAme[32];

}USERDATA;

int main(void) {
	USERDATA user = { 20, "Ã¶¼ö" };
	printf("%d, %s\n", user.nAge, user.szNAme);
	return 0;
}