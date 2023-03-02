#include <stdio.h>

int main ()
{
	int konuk, talip;  
	int genc=0, yasli=0, denk=0;
	float toplam = 0 , ort, talipSayi = 0;;
	
	printf("Konugun yasini giriniz : ");
	scanf("%d", &konuk);
	printf("Talibin yasini giriniz : ");
	scanf("%d", &talip);
	
	while ( talip != 0 ) {
		
		if ( konuk > talip)
			genc++ ;
		else if ( konuk < talip)
			yasli++ ;
		else 
			denk++ ;
		
		talipSayi++ ;
		toplam = toplam + talip ;
		
		printf("Talibin yasini giriniz : ");
		scanf("%d", &talip);
		
	}
	ort =  toplam / talipSayi ;
	
	printf("Konuktan yasli taliplerin sayisi : %d", yasli);
	printf("\nKonuktan genc taliplerin sayini : %d", genc);
	printf("\nKonugun yasina denk talip sayisi : %d", denk);
	printf("\nTaliplerin yas ortalamasi : %.2f", ort);
	
	return 0;
}