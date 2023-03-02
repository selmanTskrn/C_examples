#include <stdio.h>

int main()
{
	int model, ort, en_yeni, en_eski, araba_sayisi=0, k_ort, toplam=0;
	
	printf("Model yilini giriniz (Durdurmak icin 0) : ");
	scanf("%d", &model);
	en_yeni=model;
	en_eski=model;
	while ( model != 0){
		
		while ((model>9999 || model<1000) && model!=0){
			printf("Hata!! Model yilini giriniz (Durdurmak icin 0) : ");
			scanf("%d", &model);
		}
		araba_sayisi++;
		toplam=toplam + model;
		
		if(model>en_yeni)
			en_yeni=model;
		
		if(model<en_eski && model != 0)
			en_eski=model;
		printf("Model yilini giriniz (Durdurmak icin 0) : ");
		scanf("%d", &model);	
			
	}
	ort=toplam/araba_sayisi;
	k_ort=(toplam-en_eski-en_yeni)/(araba_sayisi-2);
	
	printf("Toplam %d adet araba giris yapti"
	"\n Ortalama = %d, Kirpilmis ortalama = %d", araba_sayisi, ort, k_ort);
	
	return 0;
}