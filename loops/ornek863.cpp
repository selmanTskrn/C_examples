#include <stdio.h>

int main()
{
	int mazda=0, honda=0, reno=0, ford=0, marka;
	float renoTutar=0, hondaTutar=0, mazdaTutar=0, fordTutar=0, tutar;
	
	printf("PROGRAMDAN CIKMAK ICIN MARKA OLARAK 111 YAZINIZ\n");
	printf("Marka, tutar giriniz : ");
	scanf("%d%f", &marka, &tutar);

	while (marka != 111){
	
		if (marka==1){
			reno++;
			renoTutar = renoTutar + tutar ;
		}
		else if ( marka==2){
			mazda++;
			mazdaTutar = mazdaTutar + tutar ;
		}
		else if (marka==3){
			honda++;
			hondaTutar = hondaTutar + tutar ;
		}
		else if (marka==4){
			ford++;
			fordTutar = fordTutar + tutar ;
		}
		else
			printf("Hata !! Yanlis marka girdiniz\n");
	
		
		printf("Marka, tutar giriniz : ");
		scanf("%d%f", &marka, &tutar);
	}
	printf("OZET BILGILER\n");

	if (ford<reno && honda<reno && mazda<reno)
		printf("En cok gelen arac markasi Renault (%d kez)", reno);
	else if (ford<mazda && honda<mazda && reno<mazda)
		printf("En cok gelen arac markasi Mazda (%d kez)", mazda);
	else if (ford<honda && mazda<honda && reno<honda)
		printf("En cok gelen arac markasi Honda (%d kez)", honda);
	else
		printf("En cok gelen arac markasi Ford (%d kez)", ford);
	printf("\n");
	if (fordTutar<renoTutar && hondaTutar<renoTutar && mazdaTutar<renoTutar)
		printf("En cok satis yapilan marka Renault (%.2f TL)", renoTutar);
	else if (fordTutar<mazdaTutar && hondaTutar<mazdaTutar && renoTutar<mazdaTutar)
		printf("En cok satis yapilan marka Mazda (%.2f TL)", mazdaTutar);
	else if (fordTutar<hondaTutar && mazdaTutar<hondaTutar && renoTutar<hondaTutar)
		printf("En cok satis yapilan marka Honda (%.2f TL)", hondaTutar);
	else
		printf("En cok satis yapilan marka Ford (%.2f TL)", fordTutar);
	
	
	return 0;
	
}