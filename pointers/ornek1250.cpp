#include <stdio.h>

void topla( int *, int *, int *);

int main()
{
	int dizi1[5] = {4,5,3,7,0}, *d1p = dizi1;
	int dizi2[5] = {1,1,0,5,6}, *d2p = dizi2;
	int dizi3[5], *d3p = dizi3;
	int i;
	
	topla(dizi1, dizi2, dizi3);
	
	printf("Dizi1	: ");
	for ( i=0 ; i<5 ; i++)
		printf("%d ", *(d1p+i));
	printf("\nDizi2	: ");
	for ( i=0 ; i<5 ; i++)
		printf("%d ", *(d2p+i));
	printf("\n----------------\n"
	"Dizi3	: ");
	for ( i=0 ; i<5 ; i++)
		printf("%d ", *(d3p+i));
	return 0;
}
void topla( int *d1p, int *d2p, int *d3p)
{
	int i;
	for ( i=0 ; i<5 ; i++)
	{
		*(d3p+i) = *(d1p+i) + *(d2p+i);
	}
}