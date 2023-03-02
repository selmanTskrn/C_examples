#include <stdio.h>
int i;
float interQuartile( int [], int);
int main()
{
	int n;
	printf("Dizinin elaman sayisini giriniz (En fazla 500) : ");
	scanf("%d", &n);
	
	int a[n];
	printf("Dizinin elemanlarini giriniz (%d adet) : ", n);
	for ( i=0 ; i<n ; i++)
		scanf("%d", &a[i]);
	
	
	printf("Dizinin ceyrekler acikligi : %.2f", interQuartile( a, n ));
	
}
float interQuartile (int a[], int n)
{
	int j, yerdegisimi, yedek;
	float toplam = 0;
	
	for ( i=1 ; i<n && yerdegisimi ; i++){
		yerdegisimi = 0;
		for ( j=0 ; j<n-i  ; j++)
			if ( a[j] < a[j+1] ) {
				yedek = a[j];
				a[j] = a[j+1];
				a[j+1] = yedek;
				yerdegisimi = 1;
			}
	}
	for ( i=n/4 ; i<n*3/4 ; i++){
		toplam = toplam + a[i];
	}
	return toplam*2/n;
}