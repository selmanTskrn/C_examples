#include <stdio.h>
#include <string.h>

int main()
{
	char dosya_adi[20];
	char yedek_adi[20];
	char *ptr;
	char ch;
	char sessizler[10] = {'a', 'e', 'i', 'o', 'u'};
	int test;
	FILE *dosya;
	FILE *yedek;
	
	printf("Dosyanin adini giriniz : ");
	scanf("%s",dosya_adi);
	dosya = fopen(dosya_adi,"r");
	if ( (dosya = fopen(dosya_adi,"r")) == NULL ){
		printf("Dosyalardan biri veya birkaci acilamadi");
		return 1;
	}
	ptr = strtok(dosya_adi,".");
	strcpy(yedek_adi,ptr);
	strcat(yedek_adi,".ssz");
	
	if ((yedek = fopen(yedek_adi,"w")) == NULL ){
		printf("Dosyalardan biri veya birkaci acilamadi");
		return 1;
	}
	ch = fgetc(dosya);
	while( !feof(dosya) ){
		test = 1;
		for (int i=0 ; i<5 && test ; i++){
			if ( sessizler[i] == ch){
				test = 0;
			}
		}
		if (test){
			fputc(ch, yedek);
		}
		ch = fgetc(dosya);
	}
	printf("----------------------------\n"
	"%s nin sessiz harfleri %s ye kopyalandi",dosya_adi,yedek_adi);
	fclose(dosya); fclose(yedek);
	return 0;
}