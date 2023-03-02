#include <stdio.h>

int main()
{
	int yas, adet=0, enBuyuk=0, enKucuk=100;
	int k_ort, toplam=0;
	
	printf("yasi giriniz (durdurmak icin 0 ) : ");
	scanf("%d", &yas);


	while (yas != 0) {
		
		while (yas<0 || yas>99){
				printf("Hata !! Lutfen dogru yas degeri giriniz");
				printf("\nyasi giriniz (durdurmak icin 0 ) : ");
				scanf("%d", &yas);
		}
		if (enKucuk>yas)
			enKucuk=yas;
		if (enBuyuk<yas)
			enBuyuk=yas;
			
		toplam=toplam+yas;
		adet++;
		
		printf("yasi giriniz (durdurmak icin 0 ) : ");
		scanf("%d", &yas);
	}
	k_ort = (toplam-enBuyuk-enKucuk)/(adet-2);

	printf("\n\nToplam %d adet izleyici giris yapti"
	"\n Ortalama = %d, Kirpilmis ortalama = %d", adet, toplam/adet, k_ort);

	return 0;
} 	