#include <stdio.h>

int main ()
{
	int bas, bit;
	int toplam=0, adet=0;
	
	printf("Baslangic degerini giriniz : ");
	scanf("%d", &bas);
	printf("Bitis degerini giriniz : ");
	scanf("%d", &bit);
	
	while ( bas >= bit ){
		printf("Hata !! \nBitis degeri baslangic degerinden kucuk ya da esit olamaz.");
		printf("\nBaslangic degerini giriniz : ");
		scanf("%d", &bas);
		printf("Bitis degerini giriniz : ");
		scanf("%d", &bit);
	}
	for ( ; bas <= bit ; bas++){
		if (bas % 3 == 0 || bas % 11 == 0){
			printf("%d,", bas);
			toplam = toplam + bas ;
			adet++;
		}
	}
	printf("\nKurala uyan %d adet sayi vardir\nToplamlari = %d", adet, toplam);
	return 0;
}