#include <stdio.h>

int main ()
{
	int i,sayac ;
	
	printf("Bir kenar uzunlugunu giriniz = ");
	scanf("%d", &i);
	
	for (sayac = 1; sayac <= i && i <= 20; sayac++ ){
		for ( int sy = 1; sy <= i ; sy++ ){
			printf("*");
		}
		printf("\n");
		;
	}
	return 0;
}