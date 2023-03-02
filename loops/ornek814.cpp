#include <stdio.h>

int main ()
{
	int N;
	float a;
	float toplam = 0;
	
	printf("Ilk karenin kenar uzunlugu : ");
	scanf("%f", &a);
	printf("N = ");
	scanf("%d", &N);
	
	for ( int sy = 1 ; sy <= N ; sy++, a = a/2 ){
		toplam = toplam + a*a ;
	}
	printf("toplam = %.3f", toplam);
	return 0;
}
