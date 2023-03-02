#include <stdio.h>

void arttir( int *, int);

int main()
{
	int dizi[10] = {40, 80, 32, 56, 90, 12, 24, 34, 64, 78}, *dizip = dizi;
	int i;
	
	printf("Dizinin ilk hali : ");
	for( i=0 ; i<10 ; i++)
		printf("%d, ", *(dizip+i));
	
	arttir( dizi, 10);
	
	printf("\n-------------------\nDegismis hali : ");
	for ( i=0 ; i<10 ; i++)
		printf("%d, ", *(dizip+i));
}
void arttir( int *dizip, int n)
{
	float enBuyuk;
	int i;
	
	enBuyuk = *dizip;
	for ( i=0 ; i<n ; i++){
		if ( enBuyuk < *(dizip+i))
			enBuyuk = *(dizip+i);
	}
	enBuyuk = (100-enBuyuk)/enBuyuk;
	
	for ( i=0 ; i<n ; i++){
		*(dizip+i) += *(dizip+i)*enBuyuk;
	}
}