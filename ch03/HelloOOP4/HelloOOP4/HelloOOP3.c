#include <stdio.h>
void PrintData(USERDATA *pUser) {
	printf("%d,%s\n", pUser->nAge, pUser->szNAme);
}
typedef struct USERDATA {
	int nAge;
	char szNAme[32];
	void(*Print)(struct USERDATA *);
}USERDATA;

int main(void) {
	USERDATA user = { 20, "Ã¶¼ö" };
	user.Print(&user);
	return 0;
}