#include <stdio.h>
#include <string.h>
#include <math.h>
struct telefon{
	char marka[20];
	char model[20];
	float fiyat;
};
typedef struct telefon Telefon;

int main()
{
	char marka[20], oneri_marka[20];
	char model[20], oneri_model[20];
	float fiyat, oneri_fiyat, toplam_fiyat = 0;
	float ortalama, enKucukFark = 999, fark;
	int adet = 0;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("1941fiyat.txt","r");
	dosya2 = fopen("1941oneri.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	fscanf(dosya1,"%s%s%f", marka, model, &fiyat);
	while( !feof(dosya1) ){
		adet++;
		toplam_fiyat += fiyat;
		fscanf(dosya1,"%s%s%f", marka, model, &fiyat);
	}
	ortalama = toplam_fiyat / adet;
	rewind(dosya1);
	
	fscanf(dosya1,"%s%s%f", marka, model, &fiyat);
	while( !feof(dosya1) ){
		fark = fabs(fiyat - ortalama);
		if( fark < enKucukFark){
			oneri_fiyat = fiyat;
			strcpy(oneri_marka , marka);
			strcpy(oneri_model , model);
			enKucukFark = fark;
		}
		fscanf(dosya1,"%s%s%f", marka, model, &fiyat);
	}
	fprintf(dosya2,"Ortalama : %.2f\n"
	"Onerdigimiz cep telefonu:\n%s %s\n%.2f", ortalama, oneri_marka, oneri_model, oneri_fiyat);
	fclose(dosya1); fclose(dosya2);
	return 0;
}