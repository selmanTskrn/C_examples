#include <stdio.h>

void serinoCoz( int, char *, int *, int *);

int main()
{
	int seri_no;
	char blok;
	int daire;
	int arac;
	
	printf("Arac tanitim karti seri numarasini giriniz : ");
	scanf("%d", &seri_no);
	
	serinoCoz( seri_no, &blok, &daire, &arac);
	
	printf("------------------------------\n");
	printf("Bu arac %c blokda %d nolu dairenin %d. aracidir", blok, daire, arac);
	return 0;
}
void serinoCoz( int a, char *blokp, int *dairep, int *aracp)
{
	*aracp = a%10;
	a /= 10;
	
	*dairep = a%100;
	a /= 100;
	
	if ( a == 1)
		*blokp = 'A';
	else if ( a == 2 )
		*blokp = 'B';
	else if ( a == 3 )
		*blokp = 'C';
}