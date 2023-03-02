#include <stdio.h>
#include <math.h>
int i;

int enbEnkArasiUzaklik ( float [], int );

int main()
{
	int n;
	printf("Kac tane bilye capi gireceksiniz : ");
	scanf("%d", &n);
	while ( 50 < n ){
		printf("Yanlis!! En fazla 50 adet girebilirsiniz ");
		printf("\nKac tane bilye capi gireceksiniz : ");
		scanf("%d", &n);
	}
	
	float a[n];
	printf("%d adet bilye capi giriniz : ");
	for ( i=0 ; i<n ; i++){
		scanf("%f", &a[i]);
	}
	
	printf("En buyuk ile en kucuk arasinda %d adet bilye vardir", enbEnkArasiUzaklik ( a, n));
	return 0;
}
int enbEnkArasiUzaklik ( float a[], int n)
{
	int enKucuk=0, enBuyuk=0;
	
	for ( i=1 ; i<n ; i++){
		if ( a[i]<a[enKucuk] )
			enKucuk = i;
		if ( a[i]>a[enBuyuk] )
			enBuyuk = i;
	}
	return fabs(enBuyuk-enKucuk)-1;
}