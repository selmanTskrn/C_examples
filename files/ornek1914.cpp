#include <stdio.h>

int main()
{
	char dosya_adi[20];
	int ch;
	int i=0;
	FILE *dosya;
	FILE *yedek;
	
	printf("Ters kopyasi olusturulacak dosyanin adini giriniz : ");
	scanf("%s",dosya_adi);
	
	dosya = fopen(dosya_adi,"r");
	yedek = fopen("yedek.bak","w");
	
	if ( dosya == NULL || yedek == NULL){
		printf("Dosyalardan bazilari açilamadi");
		return 1;
	}
	fgetc(dosya);
	while( !feof(dosya)){
		i++;
		ch = fgetc(dosya);
	}
	fseek(dosya,(i-1)*1L,0);
	while( 0<=i ){
		ch = fgetc(dosya);
		fputc(ch,yedek);
		fseek(dosya,(i-1)*1L,0);
		i--;
	}
	printf("Dosyanin tersi olan \"yedek.bak\" olusturuldu");
	fclose(dosya); fclose(yedek);
	return 0;
}