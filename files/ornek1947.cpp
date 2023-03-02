#include <stdio.h>
#include <string.h>

int telKontrol( char [], FILE *);

int main()
{
	char tel[20];
	char tel1[20], tel2[20], enBuyuktel[20];
	int kontrol = 1;
	float sure, enUzunSure = 0;
	float aranma = 0, arama = 0;
	
	FILE *dosya1;
	
	if ((dosya1 = fopen("1947santral.txt","r")) == NULL){
		printf("Dosya acilamadi");
		return 1;
	}
	while(kontrol){
		printf("Telefon numarasi giriniz :\n");
		scanf("%s",tel);
		kontrol = telKontrol(tel,dosya1);
		if(kontrol)
			printf("Hata !! Bu telefon numarasi kampuse ait degildir.\n");
	}
	
	fscanf(dosya1,"%s%s%f", tel1, tel2, &sure);
	while( !feof(dosya1) ){
		if(strcmp(tel,tel1) == 0){
			arama += sure;
			if(enUzunSure < sure){
				strcpy(enBuyuktel,tel2);
				enUzunSure = sure;
			}
		}
		else if (strcmp(tel,tel2) == 0){
			aranma += sure;
			if(enUzunSure < sure){
				strcpy(enBuyuktel,tel1);
				enUzunSure = sure;
			}
		}
		fscanf(dosya1,"%s%s%f", tel1, tel2, &sure);
	}
	printf("-----------\n");
	printf("%s numarali telefon\n"
	"Toplam arama suresi : %.1f\n"
	"Toplam aranma suresi : %.1f\n"
	"Bir defade en uzun sure\n"
	"konusulan telefon :\n %s (%.1f dk)", tel, arama, aranma, enBuyuktel, enUzunSure);
	
	fclose(dosya1);
	return 0;
}
int telKontrol( char tel[], FILE *dp)
{
	char s[15] = "031224666";
	if (strncmp(tel,s,9) == 0){
		return 0;
	}
	else
		return 1;
}