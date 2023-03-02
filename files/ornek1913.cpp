#include <stdio.h>
#include <ctype.h>
int main()
{
	char optik[20];
	char cvp_anahtari[20];
	char no[12];
	int dogru = 0, yanlis = 0, bos = 0;
	int ch1, ch2;
	FILE *dosya;
	FILE *anahtar;
	
	printf("C:\\>hesapla ");
	scanf("%s%s",optik, cvp_anahtari);
	
	dosya = fopen(optik,"r");
	anahtar = fopen(cvp_anahtari,"r");
	if( dosya == NULL || anahtar == NULL){
		printf("Dosyalardan biri veya birkaci acilamadi");
		return 1;
	}
	fscanf(dosya,"%s",&no);
	ch1 = fgetc(dosya);
	ch1 = fgetc(dosya);
	ch2 = fgetc(anahtar);
	while( !feof(dosya) ){
		if (isalpha(ch1) && ch1 == ch2)
			dogru++;
		else if (ch1 == ' ' && isalpha(ch2))
			bos++;
		else if (isalpha(ch1) && ch1 != ch2)
			yanlis++;
		ch1 = fgetc(dosya);
		ch2 = fgetc(anahtar);
	}
	printf("%s nolu ogrencinin\n"
	"Dogru sayisi  : %d\n"
	"Yanlis sayisi : %d\n"
	"Bos sayisi    : %d\n"
	"Net sayisi    : %.2f",no, dogru, yanlis, bos, (float)(dogru-0.25*yanlis));
	fclose(dosya); fclose(anahtar);
	return 0;
}