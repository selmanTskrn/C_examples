#include <stdio.h>
struct ogrenciler{
	char ad[15];
	char soyad[15];
	char no[10];
	char bolum[5];
	char cinsiyet;
	char dogumYeri[10];
	int yas;
	char tel[10];
};

typedef struct ogrenciler Ogrenciler;

int main()
{
	Ogrenciler ogrenci;
	FILE *dosya;
	
	if (( dosya = fopen("veri.dat", "r")) == NULL){
		printf("Dosya acilamadi");
		return 1;
	}
	
	printf("OGRENCI BILGILERI\n");
	printf("ADI		BOLUMU		YASI		TELEFONU\n");
	printf("-------		-------		-----		---------\n");
	fscanf(dosya, "%s %*s %*s %s %*c %*s %d %s", ogrenci.ad, ogrenci.bolum, &ogrenci.yas, ogrenci.tel);
	while( !feof(dosya) ){
		printf("%s		%s		%d		%s\n", ogrenci.ad, ogrenci.bolum, ogrenci.yas, ogrenci.tel);
		fscanf(dosya, "%s %*s %*s %s %*c %*s %d %s", ogrenci.ad, ogrenci.bolum, &ogrenci.yas, ogrenci.tel);
	
	}
	fclose(dosya);
	return 0;
}