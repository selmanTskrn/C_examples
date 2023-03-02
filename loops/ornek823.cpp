#include <stdio.h>

int main ()
{
	int sayi ;
	int adet ;
	int sayac ;
	int i=0 ;
	int toplam=0 ;
	
	printf("Kac adet sayi gireceksiniz : ");
	scanf("%d", &adet);
	
	while ( adet < 1 ) {
		printf("Hata!!\nAdet sifir ya da negatif olamaz\nKac adet sayi gireceksiniz : ");
		scanf("%d", &adet);
	}
	printf("\n%d adet sayi giriniz : ", adet);
	for ( sayac=1 ; sayac<=adet ; sayac++ ){
		scanf("%d", &sayi);
		if ( sayi % 8 == 0 ){
			toplam = toplam + sayi ;
			i++ ;
		}
		else if ( sayi % 13 == 0){
			toplam = toplam + sayi ;
			i++;
		}
			
	}	
	printf("Kurala uyan toplamda %d adet sayi girdiniz"
			"\nToplamlari = %d", i, toplam);
	return 0;
}