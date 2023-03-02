// iki dizi arasindaki Hamming Uzakligi

#include <stdio.h>
int hammingUzakligi( int[], int[], int );
int main()
{
	int a[10];
	int b[10];
	
	printf("Birinci dizinin elemanlarini giriniz : ");
	for (int i=0 ; i<10 ; i++)
		scanf("%d", &a[i]);
	printf("Ikinci dizinin elemanlarini giriniz : ");
	for (int i=0 ; i<10 ; i++)
		scanf("%d", &b[i]);
	
	printf("Iki dizinin arasindaki Hamming Uzakligi : %d", hammingUzakligi(a, b, 10));
}
int hammingUzakligi( int a[], int b[], int n)
{
	int sonuc = n;
	for (int i=0 ; i<n ; i++)
	{
		if ( a[i] == b[i] )
			sonuc--;
	}
	return sonuc;
}
