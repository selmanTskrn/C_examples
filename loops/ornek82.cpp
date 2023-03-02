#include <stdio.h>

int main ()
{
	int sayi;
	float sayac = 1;
	float toplam = 0;
	
	printf("Sayiyi giriniz : ");
	scanf("%d", &sayi);
	
	while ( sayac <= sayi ){
		toplam = toplam + (sayac + 1)/sayac  ;
		sayac++ ;
	}
	
	printf("sonuc : %f", toplam);
	return 0;

}