#include <stdio.h>

int main ()
{
	int olcum_sayisi, sayac;
	float olcum, ara_toplam, genel_toplam=0;
	
	printf("Olcum sayisi : ");
	scanf("%d", &olcum_sayisi);
	
	do {
		ara_toplam = 0;
		for (sayac=1 ; sayac<=olcum_sayisi ; sayac++ ){
			printf("Olcum giriniz : ");
			scanf("%f", &olcum);
			ara_toplam = ara_toplam + olcum;
			genel_toplam = genel_toplam + olcum;
			
		}
		printf("\tAra toplam = %.2f", ara_toplam);
		
		printf("\nOlcum sayisi : ");
		scanf("%d", &olcum_sayisi);
		
	}while ( olcum_sayisi != 0);
	
	printf("Genel toplam = %.2f", genel_toplam);
	
	return 0;
	
}