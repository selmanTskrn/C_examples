//notlari 100e tamamlama

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i;
void yuzeTamamlama( int[], int);
int main()
{
	int notlar[20];
	srand(time(0));
	printf("Notlari giriniz (20 adet) : ");
	for ( i=0 ; i<20 ; i++){
		notlar[i] = rand()%100 + 1;
		printf("%d, ", notlar[i]);
	}
	yuzeTamamlama( notlar, 20);
	printf("\n100 e tamamlanmis notlar : ");
	for ( i=0 ; i<20 ; i++)
		printf("%d, ", notlar[i]);

}
void yuzeTamamlama( int a[], int n)
{
	float enBuyuk = 0;
	
	for ( i=0 ; i<n ; i++)
	{
		if (a[i]>enBuyuk)
			enBuyuk = a[i];
	}
	enBuyuk = (100 - enBuyuk)/enBuyuk;
	printf("\nen Buyuk = %.2f", enBuyuk);
	for ( i=0 ; i<n ; i++)
	{
		a[i] = a[i] + a[i]*enBuyuk;
	}
	
}