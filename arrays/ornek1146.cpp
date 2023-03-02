#include <stdio.h>
#include <math.h>
int onlukYap( int [], int);
int main()
{
	int dizi[6] = {1, 1, 1, 1, 1, 1}, c;
	
	c = onlukYap( dizi, 6);
	
	printf("Onluk karsiligi = %d", c);
}
int onlukYap( int a[], int n)
{
	int i, sonuc=0;
	
	for ( i=0 ; i<n ; i++)
	{
		sonuc += a[i] * pow( 2,n-i-1);
	}
	return sonuc;
}
