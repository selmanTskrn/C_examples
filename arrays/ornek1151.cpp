//
#include <stdio.h>
#include <math.h>
float sapma( int[], int);
float ort( int[], int);
int main()
{
	int notlar[10] = {10,20,30,40,50,60,70,80,90,100};
	float ortalama, standartSapma;
	
	ortalama = ort( notlar, 10);
	standartSapma = sapma( notlar, 10);
	
	for ( int i=0 ; i<10 ; i++)
	{
		printf("\n%d. ogrencinin harf notu : ", i+1);
		
		if ( notlar[i]<ortalama - 1.5*standartSapma)
			printf("F");
		else if ( notlar[i]<ortalama - 0.5*standartSapma)
			printf("D");
		else if ( notlar[i]<ortalama + 0.5*standartSapma)
			printf("C");
		else if ( notlar[i]<ortalama + 1.5*standartSapma)
			printf("B");
		else 
			printf("A");
	}
}
float ort( int a[], int n)
{
	float toplam = 0;
	
	for (int i=0 ; i<n ; i++)
		toplam += a[i];
	return toplam/n;
}
float sapma( int a[], int n)
{	
	float toplam = 0, ortalama, standartSapma = 0;

	int i;
	
	for (int i=0 ; i<n ; i++)
		toplam += a[i];
	
	ortalama = toplam/n;
	
	for ( i=0 ; i<n ; i++)
		standartSapma += pow(a[i] - ortalama, 2);
		
	return sqrt(standartSapma/10);
}