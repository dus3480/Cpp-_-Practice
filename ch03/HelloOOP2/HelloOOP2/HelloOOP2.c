#include <stdio.h>

typedef struct USERDATA {
	int nAge;
	char szNAme[32];

}USERDATA;
void PrintData(USERDATA *pUser) {
	printf("%d,%s\n", pUser->nAge, pUser->szNAme);
}
int main(void) {
	USERDATA user = { 20, "ö��" };
	PrintData(&user);
	return 0;
}