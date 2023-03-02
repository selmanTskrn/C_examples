#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int i;
void kucuktenBuyuge ( int [], int );
int main()
{
	int n, ceyrek;
	printf("Eleman sayisini giriniz : ");
	scanf("%d", &n);
	
	int a[n];
	srand(time(0));
	printf("Otomatik olusturulmus dizi : ");
	for ( i=0 ; i<n ; i++){
		a[i] = rand()%100 + 1;
		printf("%d, ", a[i]);
	}
	
	printf("\nDizinin siralanmis hali : ");
	kucuktenBuyuge (a, n);
	
	ceyrek = (n + 1)*0.75;
	printf("\nUcuncu ceyrek degeri (%d siradaki) : %d", ceyrek, a[ceyrek-1]);
}
void kucuktenBuyuge ( int a[], int n )
{
	int j, yedek, enKucuk;
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
	for ( i=0 ; i<n ; i++)
		printf("%d, ", a[i]);
}