#include <stdio.h>

int Basamakla( long , int *);

int main()
{
	long sayi;
	int dizi[40];
	int c, i;
	
	
	printf("Sayiyi giriniz : ");
	scanf("%ld", &sayi);
	
	c = Basamakla( sayi, dizi);
	
	printf("%ld sayisinin basamak degeri %d\n", sayi, c);
	for ( i=c-1 ; 0<=i ; i--)
		printf("%d, ", dizi[i]);
}
int Basamakla( long n, int *dizip)
{
	int i=0;
	
	while ( n != 0 ) {
		*( dizip + i) = n%10;
		i++;
		n /= 10;
	}
	
	*(dizip + i) = -1;
	
	return i;
}