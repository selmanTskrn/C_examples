#include <stdio.h>

int main()
{
	int sayilar[6];
	
	printf("sayilari giriniz : ");
	
	for ( int i=0 ; i<6 ; i++){
		scanf("%d", &sayilar[i]);
		
	}
	printf("Sayilar ve Histogramlari\n");
	for ( int i=0 ; i<6 ; i++){
		printf("%d\t", sayilar[i]);
		for ( int a=0 ; a<sayilar[i] ; a++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}