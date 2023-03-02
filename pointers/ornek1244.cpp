#include <stdio.h>

void eleme(int *, int );

int main()
{
	int dizi[9] = {1,120,4,6,12,25,6,6,120};
	int i;
	
	eleme( dizi, 9);
	
	for ( i=0 ; i<9 ; i++)
		printf("%d,\n", dizi[i]);
	return 0;
}
void eleme( int *dizip, int n)
{
	int i, j, k;
	
	for ( i=0 ; i<n-1 ; i++)
	{
		k = *(dizip+i);
		for ( j=i+1 ; j<n ; j++)
		{
			if ( k == *(dizip+j)){
				*(dizip+j) = -1;
				*(dizip+i) = -1;
			}
		}
	}
}