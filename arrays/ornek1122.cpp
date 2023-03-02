#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i;
void sirala( int [], int );
int main()
{
	int dizi[50];
	
	srand(time(0));
	printf("Dizinin ilk hali : ");
	for ( i=0 ; i<50 ; i++){
		dizi[i] = rand()%1000 + 1;
		printf("%d, ", dizi[i]);
	}
	sirala ( dizi, 50);
	printf("\nDizinin siralanmis hali : ");
	for ( i=0 ; i<50 ; i++)
		printf("%d, ", dizi[i]);
	
}
void sirala( int a[], int n)
{
	int  j, yedek, enKucuk;
	
	for ( i=0 ; i<n-1 ; i++){
		enKucuk = i;
		for ( j=i+1 ; j<n ; j++){
			if ( a[j]<a[enKucuk] )
				enKucuk = j;
		}
		yedek = a[i];
		a[i] = a[enKucuk];
		a[enKucuk] = yedek;	
	}
	
	
}