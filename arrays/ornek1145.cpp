#include <stdio.h>
#include <math.h>
int sekizlikYap( int[], int );
int main()
{
	int sayi;
	int dizi[10] = {0};
	printf("Onluk sayiyi giriniz : ");
	scanf("%d", &sayi);
	
	sekizlikYap( dizi, sayi );
	printf("Sekizlik karsiligi : ");
	for ( int i=0 ; i<10 ; i++)
		printf("%d ", dizi[i]);
}
int sekizlikYap( int a[], int num )
{
	int i, k=0;
	
	for ( i=0 ; i<10 ; i++){
		k = pow(8,9-i);
		a[i] = num/k;
		num = num - a[i]*k;
	}
	return a[10];
}