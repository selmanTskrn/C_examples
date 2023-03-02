#include <stdio.h>

int main ()
{
	int a;
	int toplam = 0;
	int tekSayi = 0;
	int sayac = 1 ;
	float ortalama;
	
	printf("Sayilari giriniz (10 adet) :  ");
	
	while ( sayac < 11){
		scanf("%d", &a);
		if ( a % 2 ){
			toplam = toplam + a ;
			tekSayi = tekSayi + 1 ;
		}
		sayac++ ;
	}
	if ( tekSayi != 0){
		ortalama = (float) toplam / tekSayi ;
	}
	
	printf("Girilen %d adet tek sayinin aritmetik ortalamasi = %.2f", tekSayi, ortalama);
	return 0;
}