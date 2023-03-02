#include <stdio.h>
#include <math.h>

void enYakiniBul( int *, int, int, int *, int *);

int main()
{
	int dizi[9] = {9,7,3,4,11,67,25,56,34};
	int arananSayi;
	int indis;
	int eleman;
	
	printf("Sayi : ");scanf("%d", &arananSayi);
	enYakiniBul( dizi, 9, arananSayi, &indis, &eleman);
	printf("En yakin eleman : %d\n", eleman);
	printf("Indis : %d", indis);
	return 0;
}
void enYakiniBul( int *dizip, int n, int aranan, int *indptr, int *eleptr)
{
	int i, fark;
	
	fark = fabs(*dizip - aranan);
	*indptr = 0;
	*eleptr = *dizip;
	for ( i=1 ; i<n ; i++)
	{
		if ( fabs(*(dizip+i) - aranan) < fark){
			fark = fabs(*(dizip+i) - aranan);
			*indptr = i;
			*eleptr = *(dizip+i);
		}
	}
}