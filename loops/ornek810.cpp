/* Girilen x ve n degerine göre

T = 1 - x/1 + (x^2)/2 - (x^3)/3 +..... (x^n)/n */

#include <stdio.h>

int main ()
{
	int x, n;
	int sayac = 1;
	float carpim = 1;
	float toplam = 1;
	printf("x degeri : ");
	scanf("%d", &x);
	printf("n degeri : ");
	scanf("%d", &n);
	
	for ( sayac = 1 ; sayac <= n ; sayac++ ) {
		carpim = carpim*x;
		if (sayac % 2 == 1 ){
			toplam = toplam - (carpim/sayac);
			
		}
		else {
			toplam = toplam + (carpim/sayac);
		}	
	}
	printf("toplam : %f", toplam);
	return 0;
}
