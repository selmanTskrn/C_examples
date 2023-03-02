#include <stdio.h>

void ilkBozaniBul(int *, int, int *, int *);

int main()
{
	int dizi[9] = {9,7,3,4,11,67,25,56,34};
	int indis;
	int eleman;
	
	ilkBozaniBul( dizi, 9, &indis, &eleman);
	printf("Sirayi ilk bozan eleman: %d\n", eleman);
	printf("Indisi : %d\n", indis);
	return 0;
}
void ilkBozaniBul(int *dizip, int n, int *indptr, int *eleptr)
{
	int i;
	
	for ( i=0 ; i<n ; i++)
	{
		if ( *(dizip+i) - *(dizip+i+1) < 0){
			*indptr = i+1;
			*eleptr = *(dizip+i+1);
			break;
		}
	}
}
