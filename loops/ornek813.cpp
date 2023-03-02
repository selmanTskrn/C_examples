#include <stdio.h>

int main ()
{
	int i ;
	int sayac = 1;
	
	printf("Bir kenar uzunlugunu giriniz = ");
	scanf("%d", &i);
	
	for ( sayac=i ; sayac <= i && i < 21 && sayac>0 ; sayac--){
		for ( int j = 1; j <= sayac; j++ ){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}