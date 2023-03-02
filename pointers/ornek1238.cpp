#include <stdio.h>

void harmanla( int *, int *, int *);

int main()
{
	int dizi1[5], dizi2[5];
	int dizi3[10];
	int i;
	
	printf("Birinci dizinin elemanlarini giriniz : ");
	for ( i=0 ; i<5 ; i++)
		scanf("%d", &dizi1[i]);
	
	printf("Ikinci dizinin elemanlarini giriniz : ");
	for ( i=0 ; i<5 ; i++)
		scanf("%d", &dizi2[i]);
	
	harmanla( dizi1, dizi2, dizi3);
	
	printf("---------------------\n"
	"Harmanlanmis ucuncu dizi : ");
	for ( i=0 ; i<10 ; i++)
		printf("%d ", dizi3[i]);
	
	return 0;
}
void harmanla( int *dizi1p, int *dizi2p, int *dizi3p)
{
	int i;
	
	for ( i=0 ; i<10 ; i++)
	{
		if ( i%2 == 0)
			*(dizi3p+i) = *(dizi1p + i/2);
		else
			*(dizi3p+i) = *(dizi2p + i/2);
	}
}