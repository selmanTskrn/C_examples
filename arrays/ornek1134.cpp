// iki dizide kaç adet ortak eleman oldugunu bulan program
#include <stdio.h>
int kacTaneVar( int[], int , int[] , int );
int main()
{
	int dizi1[7] = {3, 12, 1, 12, 7, 3, 12};
	int dizi2[3] = { 3, 12, 44 }, c;
	
	c = kacTaneVar( dizi1, 7, dizi2, 3);
	printf("Sonuc = %d", c);
}
int kacTaneVar( int a[], int n1, int b[], int n2)
{
	int i, j, test, k, x=0;
	int yedek[100];
	
	for ( i=0 ; i<n1 ; i++)
	{
		for ( j=0 ; j<n2 ; j++)
			if ( a[i]==b[j] ){
				test = 0;
				for ( k=0 ; k<x ; k++)
				{
					if ( yedek[k]==a[i] )
						test++;
				}
				if ( test==0 ){
					yedek[x] = a[i];
					x++;
				}
			}
	}
	return x;
}
