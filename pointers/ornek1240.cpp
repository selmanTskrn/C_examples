#include <stdio.h>
#include <math.h>

void ortalamayaYakiniBul( int *, int, int *, int *, float *);

int main()
{
	int dizi[9] = {9,7,3,4,11,67,25,56,34};
	int indis;
	int eleman;
	float ortalama;
	
	ortalamayaYakiniBul( dizi, 9, &indis, &eleman, &ortalama);
	
	printf("Ortalama : %.2f\n", ortalama);
	printf("En yakin eleman : %d\n", eleman);
	printf("Indisi : %d", indis);
	return 0;
}
void ortalamayaYakiniBul( int *dizip, int n, int *indptr, int *eleptr, float *ortptr)
{
	int i;
	float fark;
	 
	*ortptr = 0;
	
	for ( i=0 ; i<n ; i++)
		*ortptr += *(dizip+i);
	*ortptr /= n;
	
	fark = fabs(*dizip - *ortptr);
	*eleptr = *dizip;
	*indptr = 0;
	
	for ( i=1 ; i<n ; i++){
		if ( fabs(*(dizip+i) - *ortptr) < fark){
			fark = fabs(*(dizip+i) - *ortptr);
			*eleptr = *(dizip+i);
			*indptr = i;
		} 
	}
	
}