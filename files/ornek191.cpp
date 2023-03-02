#include <stdio.h>
#include <ctype.h>
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
	char devam = 'E';
	FILE *dosya;
	
	if (( dosya = fopen("veri.dat", "a")) == NULL ){
		printf("Dosya acilamadi");
		return 1;
	}
	printf("OGRENCI BILGILERI GIRIS EKRANI\n");
	printf("--------------------------\n");
	
	while( devam != 'H'){
		printf("|	ADI		:");
		scanf("%s", ogrenci.ad);
		printf("|	SOYADI		:");
		scanf("%s", ogrenci.soyad);
		printf("|	NO		:");
		scanf("%s", ogrenci.no);
		printf("|	BOLUMU		:");
		scanf("%s", ogrenci.bolum);
		printf("|	CINSIYETI	:");
		scanf(" %c", &ogrenci.cinsiyet);
		printf("|	DOGUM YERI	:");
		scanf("%s", ogrenci.dogumYeri);
		printf("|	YASI		:");
		scanf("%d", &ogrenci.yas);
		printf("|	TELEFONU	:");
		scanf("%s", ogrenci.tel);
		fprintf(dosya, "%s\n%s\n%s\n%s\n%c\n%s\n%d\n%s\n"
		, ogrenci.ad, ogrenci.soyad, ogrenci.no, ogrenci.bolum,
		 ogrenci.cinsiyet, ogrenci.dogumYeri, ogrenci.yas, ogrenci.tel);
		printf("--------------------------\n");
		printf("Kayit yapmaya devam etmek istiyor musunuz? (E-H) : ");
		scanf(" %c", &devam);
		devam = toupper(devam);
	}
	fclose(dosya);
	return 0;
}