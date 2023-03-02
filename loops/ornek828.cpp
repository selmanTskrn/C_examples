#include <stdio.h>

int main ()
{
	int model;
	int enYeni;
	int adet=0;
	
	printf("Model yilini giriniz (Durdurmak icin 0) : ");
	scanf("%d", &model);
	
	while ( model>10000 || model<1000 ){
	
		printf("Hata!! Lutfen 4 haneli deger giriniz"
			"\nModel yilini giriniz (Durdurmak icin 0) : ");
		scanf("%d", &model);
 	}
	
	enYeni = model;
	
	while ( model != 0 ){
		
		while ( model-model%1000==0 ){
	
			printf("Hata!! Lutfen 4 haneli deger giriniz"
			"\nModel yilini giriniz (Durdurmak icin 0) : ");
			scanf("%d", &model);
 		}
		if(enYeni < model){
			enYeni = model;
			adet=1;
		}
		else if ( enYeni == model )
			adet++;
		
		printf("Model yilini giriniz (Durdurmak icin 0) : ");
		scanf("%d", &model);
	}
	
	printf("En yeni model %d (toplam %d adet)", enYeni, adet);
	return 0;
}
