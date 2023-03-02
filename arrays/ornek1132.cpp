// seikzilik sayı sistemindeki sayiyi onluk sayiya cevirme
#include <stdio.h>
#include <math.h>

int onlukYap( int[], int );

int main()
{
	int rakam[10];
	printf("Sekizlik sayinin rakamlarini giriniz : ");
	for (int i=0 ; i<10 ; i++)
		scanf("%d", &rakam[i]);
	printf("\nOnluk karsiligi = %d", onlukYap( rakam, 10 ));
}
int onlukYap( int a[], int n)
{
	int toplam = 0;
	for (int i=n-1 ; 0<=i ; i--)
	{
		toplam += a[i] * pow(8,n-i-1);
	}
	return toplam;
}