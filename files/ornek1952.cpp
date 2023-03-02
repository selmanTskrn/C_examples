#include <stdio.h>

int main()
{
	char marka[10];
	char model[10];
	int telefon_adedi = 0;
	float fiyat, fiyat_ortalamasi, toplam_fiyat = 0;
	
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;
	
	dosya1 = fopen("fiyatlar.txt","r");
	dosya2 = fopen("ucuz.txt","w");
	dosya3 = fopen("pahali.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL || dosya3 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s%s%f", marka, model, &fiyat);
	while( !feof(dosya1) ){
		telefon_adedi++;
		toplam_fiyat += fiyat;
		fscanf(dosya1,"%s%s%f", marka, model, &fiyat);
	}
	fiyat_ortalamasi = toplam_fiyat / telefon_adedi;
	
	rewind(dosya1);
	
	fscanf(dosya1,"%s%s%f", marka, model, &fiyat);
	while( !feof(dosya1) ){
		if (fiyat <= fiyat_ortalamasi){
			fprintf(dosya2,"%s %s %.2f\n", marka, model, fiyat);
		}
		else{
			fprintf(dosya3,"%s %s %.2f\n", marka, model, fiyat);
		}
		fscanf(dosya1,"%s%s%f", marka, model, &fiyat);
	}
}