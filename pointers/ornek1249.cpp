#include <stdio.h>

void sayiBul(float *, int, float *, int *, int *);

int main()
{
	float dizi[10] = {9.80, 9.62, 1.68, 1.62, 1.80, 1.2, 1.82, 1.49, 1.7, 1.5};
	float ortalama;
	int ortalamadanBuyukEsit;
	int ortalamadanKucuk;
	
	sayiBul( dizi, 10, &ortalama, &ortalamadanBuyukEsit, &ortalamadanKucuk);
	printf("Ortalama = %.2f \n", ortalama);
	printf("Ortalamadan buyuk-esit = %d\n", ortalamadanBuyukEsit);
	printf("Ortalamadan kucuk = %d", ortalamadanKucuk);
	return 0;
}
void sayiBul( float *dizip, int n, float *ortptr, int *buyukEsitp, int *kucukp)
{
	int i;
	
	*ortptr = 0;
	*buyukEsitp = 0;
	*kucukp = 0;
	
	for ( i=0 ; i<n ; i++)
	{
		*ortptr += *(dizip+i);
	}
	
	*ortptr /= 10;
	
	for ( i=0 ; i<n ; i++)
	{
		if ( *(dizip+i) > *ortptr)
			*buyukEsitp += 1;
		else
			*kucukp += 1;
	}
}