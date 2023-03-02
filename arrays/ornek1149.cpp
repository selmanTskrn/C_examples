// Dizide araya sayi ekleme

#include <stdio.h>
void sayiEkleme( int[], int, int );
int main()
{
	int A[10] = {53, 47, 45, 40, 10, 8, 7, 3}, i;
	
	sayiEkleme( A, 10, 36);
	
	for ( i=0 ; i<10 ; i++)
		printf("%d, ", A[i]);
}
void sayiEkleme( int a[], int n, int num)
{
	int i, yedek;
	
	for ( i=0 ; i<n ; i++)
	{
		if ( a[i]>num )
			continue;
		yedek = a[i];
		a[i] = num;
		num = yedek;
		
	}
}
