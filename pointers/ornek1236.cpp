#include <stdio.h>

void ekle( int *,int *, int *);

int main()
{
	int dizi1[5] = {4,5,3,7,0}, *dizi1p = dizi1;
	int dizi2[5] = {1,1,0,5,6}, *dizi2p = dizi2;
	int dizi3[10], *dizi3p = dizi3;
	int i;
	
	ekle( dizi1, dizi2, dizi3);
	
	printf("Dizi1 :	");
	for( i=0 ; i<5 ; i++)
		printf("%d ", *(dizi1p+i));
	
	printf("\nDizi2 :	");
	for( i=0 ; i<5 ; i++)
		printf("%d ", *(dizi2p+i));
		
	printf("\n-----------------------\nDizi3 :	");
	for( i=0 ; i<10 ; i++)
		printf("%d ", *(dizi3p+i));
}
void ekle( int *dizi1p, int *dizi2p, int *dizi3p)
{
	int i;
	
	for ( i=0 ; i<5 ; i++){
		*(dizi3p+i) = *(dizi1p+i);
	}
	for ( i=0 ; i<5 ; i++){
		*(dizi3p+i+5) = *(dizi2p+i);
	}
	
}