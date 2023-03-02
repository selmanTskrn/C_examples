#include <stdio.h>

void kesirleriTopla( int, int, int, int, int *, int *);

int main()
{
	int pay1, pay2, pay3;
	int payda1, payda2, payda3;
	
	printf("Birinci ifadenin payini ve paydasini giriniz : ");
	scanf("%d%d", &pay1, &payda1);
	
	printf("Ikinci	ifadenin payini ve paydasini giriniz : ");
	scanf("%d%d", &pay2, &payda2);
	
	kesirleriTopla( pay1, payda1, pay2, payda2, &pay3, &payda3);
	
	printf(
	" %d      %d      %d \n"
	"---- + ---- = ----\n"
	" %d      %d      %d", pay1, pay2, pay3, payda1, payda2, payda3);
	return 0;
}
void kesirleriTopla( int p1, int pd1, int p2, int pd2, int *p3ptr, int *pd3ptr)
{
	*pd3ptr = pd1 * pd2;
	*p3ptr = p1 * pd2 + p2 * pd1;
}