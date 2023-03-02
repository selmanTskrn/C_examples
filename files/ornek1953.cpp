#include <stdio.h>

int main()
{
	char ad[20];
	char soyad[20];
	int ogrenci_sayisi = 0;
	float puan, ortalama_puan, not_toplami = 0;
	
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;
	
	dosya1 = fopen("8A.txt","r");
	dosya2 = fopen("8B.txt","r");
	dosya3 = fopen("iyiler.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL || dosya3 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s%s%f", ad, soyad, &puan);
	while( !feof(dosya1) ){
		ogrenci_sayisi++;
		not_toplami += puan;
		fscanf(dosya1,"%s%s%f",ad, soyad, &puan);
	}
	
	fscanf(dosya2,"%s%s%f", ad, soyad, &puan);
	while( !feof(dosya2) ){
		ogrenci_sayisi++;
		not_toplami += puan;
		fscanf(dosya2,"%s%s%f",ad, soyad, &puan);
	}
	ortalama_puan = not_toplami / ogrenci_sayisi;
	fprintf(dosya3,"Ortalama = %.2f\n\n", ortalama_puan);

	rewind(dosya1);
	rewind(dosya2);
	
	fscanf(dosya1,"%s%s%f", ad, soyad, &puan);
	while( !feof(dosya1) ){
		if(puan > ortalama_puan){
			fprintf(dosya3,"%s %s %.2f\n", ad, soyad, puan);
		}
		fscanf(dosya1,"%s%s%f", ad, soyad, &puan);
	}
	fscanf(dosya2,"%s%s%f", ad, soyad, &puan);
	while( !feof(dosya2) ){
		if(puan > ortalama_puan){
			fprintf(dosya3,"%s %s %.2f\n", ad, soyad, puan);
		}
		fscanf(dosya2,"%s%s%f", ad, soyad, &puan);
	}
	fclose(dosya1); fclose(dosya2); fclose(dosya3);
	return 0;
}