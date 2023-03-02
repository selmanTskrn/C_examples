#include <stdio.h>

void izinCoz( int , int *, int *, int *, int *);
int main()
{
	int kod;
	int r;
	int w;
	int x;
	int p;
	
	printf("Yetki kodunu giriniz : ");
	scanf("%d", &kod);
	izinCoz( kod, &r, &w, &x, &p);
	printf("r-okuma		: %d", r);
	printf("\nw-yazma		: %d", w);
	printf("\nx-calistirma	: %d", x);
	printf("\np-yazdirma	: %d", p);
}
void izinCoz(int a, int *rp, int *wp, int *xp, int *pp)
{
	*pp = a%2;
	a = a/2;
	*xp = a%2;
	a = a/2;
	*wp = a%2;
	a = a/2;
	*rp = a%2;
	
}