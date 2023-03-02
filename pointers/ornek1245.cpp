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
void eleme(int *dizip, int n)
{
	int i, j, test;
	
	for ( i=0 ; i<n ; i++)
	{
		test=1;
		for ( j=0 ; j<n ; j++)
		{
			if ( *(dizip+i)==*(dizip+j) && i!=j){
				test=0;
			}
		}
		if (test)
			*(dizip+i) = -1;
	}
}