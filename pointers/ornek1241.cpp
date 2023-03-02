#include <stdio.h>

void ilkTekrarlayaniBul(int *, int, int *, int *);

int main()
{
	int dizi[9] = {9,7,3,4,11,3,25,56,11};
	int indis;
	int eleman;
	
	ilkTekrarlayaniBul( dizi, 9, &indis, &eleman);
	
	printf("Ilk tekrarlayan : %d\n", eleman);
	printf("Indisi : %d", indis);
	return 0;
}
void ilkTekrarlayaniBul( int *dizip, int n, int *indptr, int *eleptr)
{
	int i, j, test = 0;
	
	for ( i=0 ; i<n-1 && test==0 ; i++)
	{
		for ( j=i+1 ; j<n && test==0 ; j++)
		{
			if(*(dizip+i) == *(dizip+j)){
				*indptr = i;
				*eleptr = *(dizip+i);
				test = 1;
			}
		}
	}
}