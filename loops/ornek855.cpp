#include <stdio.h>

int main()
{
	int mevcut, vize, final, notA=0, notB=0, notC=0, notF=0 ;
	float ortalama, ogrenci_ort, toplam=0;
	
	printf("Sinif mevcudunu kactir? : ");
	scanf("%d", &mevcut);
	
	for ( int i=1; i<=mevcut ; i++){
	
		printf("%d. ogrencinin vize ve finali : ", i);
		scanf("%d%d", &vize, &final);
		
		while ( 0 > vize || vize > 100){
			printf("Hata !! %d. ogrencinin vize ve finali : ", i);
			scanf("%d%d", &vize, &final);
		}
	
		ogrenci_ort =(float)(vize*0.4 + final*0.6)/25;
	
		if (ogrenci_ort < 2.0 ){
			notF++;
		}
		else if (ogrenci_ort < 2.5){
			notC++;
		}
		else if (ogrenci_ort < 3.5){
			notB++;
		}
		else 
			notA++;
		
		toplam = toplam + ogrenci_ort ;
	}
	printf("%d tane F, %d tane C, %d tane B, %d tane A vardir", notF, notC, notB, notA);
	printf("\nGenel ortalama : %.2f", toplam/mevcut);
	return 0;
}