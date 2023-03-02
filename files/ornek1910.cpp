#include <stdio.h>
#include <string.h>
int main()
{
	char cumle[150];
	char dosya_adi[20];
	char yedek_adi[20];
	char *ptr;
	FILE *dosya;
	FILE *yedek;
	
	printf("Kopyasi alinacak dosyayi giriniz : ");
	scanf("%s",dosya_adi);
	dosya = fopen(dosya_adi,"r");
	if ( dosya == NULL ){
		printf("Dosyalardan biri veya birkaci acilamadi");
		return 1;
	}
	
	ptr = strtok(dosya_adi,".");
	strcpy(yedek_adi,ptr);
	strcat(yedek_adi,".YED");
	
	yedek = fopen(yedek_adi,"w");
	if ( yedek == NULL ){
		printf("Dosyalardan biri veya birkaci acilamadi");
		return 1;
	}
	
	
	fgets(cumle, 150, dosya);
	while( !feof(dosya) ){
		fputs(cumle, yedek);
		fgets(cumle, 150, dosya);
	}
	printf("%s dosyasi basarli bir sekilde olusturuldu", yedek_adi);
	fclose(dosya); fclose(yedek);
	return 0;
}