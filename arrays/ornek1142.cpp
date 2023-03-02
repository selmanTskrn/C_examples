//
#include <stdio.h>
void icindekileriSifirla( int[], int, int[], int );
int main()
{
	int dizi1[7] = {3,12,1,12,7,3,12};
	int dizi2[3] = {3,12}, c;
	
	icindekileriSifirla( dizi1, 7, dizi2, 2 );
	for ( c=0 ; c<7 ; c++)
		printf("%d, \n", dizi1[c]);
	return 0;
}
void icindekileriSifirla( int a[], int n1, int b[], int n2)
{
	int i, j, test;
	
	for (i=0 ; i<n1 ; i++)
	{
		test = 0;
		for (j=0 ; j<n2 ; j++)
		{
			if (a[i+j]==b[j]){
				test++;
			}
		}
		if (test==n2){
			test = 0;
			while (test<n2)
			{
				a[i+test] = 0;
				test++;
			}
		}
	}
}