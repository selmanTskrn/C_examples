#include <stdio.h>
int siralimi( int[], int);
int main()
{
	int n=5;
	int a[n]= { 1, 2, 4, 6, 9};
	
	printf("%d", siralimi(a, n));
}
int siralimi( int a[], int n)
{
	int i, j, b[n];
	int enKucuk, value, yedek;
	for ( i=0 ; i<n ; i++)		// a dizisinin sirali halini bulmak icin b dizisine kopyaladik
		b[i] = a[i];
	
	for ( i=0 ; i<n-1 ; i++){   // selection sorting
		enKucuk=i;
		for ( j=i+1 ; j<n ; j++)
			if ( b[j]<b[enKucuk] )
				enKucuk = j;
		yedek = b[i];
		b[i] = b[enKucuk];
		b[enKucuk] = yedek;
	}
	value = 1;					// a dizisi ile b dizisinin degerleri eşit mi kontrol ediyoruz
	for ( i=0 ; i<n ; i++){
		if ( a[i] != b[i])
			value = 0;
	}
	return value;
}