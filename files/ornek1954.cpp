#include <stdio.h>
#include <string.h>

struct ogrenci{
	char ad[20];
	char soyad[20];
	char cnsyt[10];
	float puan;
};
typedef struct ogrenci Ogrenci;

int main()
{
	Ogrenci ogrenci1, erkek1, kadin1;
	int kadin_adet = 0, erkek_adet = 0;
	float kadin_top = 0, erkek_top = 0;
	float kadin_enyuksek = 0, erkek_enyuksek = 0;
	
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;
	
	dosya1 = fopen("1954sonuclar.txt","r");
	dosya2 = fopen("1954erkekler.txt","w");
	dosya3 = fopen("1954kadinlar.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL || dosya3 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	fscanf(dosya1,"%s%s%s%f",ogrenci1.ad, ogrenci1.soyad, ogrenci1.cnsyt, &ogrenci1.puan);
	while( !feof(dosya1) ){
		if( strcmp(ogrenci1.cnsyt,"erkek") == 0){
			erkek_adet++;
			erkek_top += ogrenci1.puan;
			if(ogrenci1.puan > erkek_enyuksek){
				erkek1 = ogrenci1;
				erkek_enyuksek = ogrenci1.puan;
			}
		}
		else if ( strcmp(ogrenci1.cnsyt,"kadin") == 0){
			kadin_adet++;
			kadin_top += ogrenci1.puan;
			if (ogrenci1.puan > kadin_enyuksek){
				kadin1 = ogrenci1;
				kadin_enyuksek = ogrenci1.puan;
			}
		}
		fscanf(dosya1,"%s%s%s%f",ogrenci1.ad, ogrenci1.soyad, ogrenci1.cnsyt, &ogrenci1.puan);
	}
	
	fprintf(dosya2,"Ogrenci sayisi = %d\nOrtalama Puani = %.2f\n"
	"En yuksek puan = %.2f\nBirinci	= %s %s", erkek_adet, erkek_top/(float)erkek_adet, erkek1.puan, erkek1.ad, erkek1.soyad);
	fprintf(dosya3,"Ogrenci sayisi = %d\nOrtalama Puani = %.2f\n"
	"En yuksek puan = %.2f\nBirinci	= %s %s", kadin_adet, kadin_top/(float)kadin_adet, kadin1.puan, kadin1.ad, kadin1.soyad);
	
	fclose(dosya1); fclose(dosya2); fclose(dosya3);
	return 0;
}