#include <stdio.h>

int main()
{
	char ch;
	int val;
	char dosya_adi[20];
	char kodlar[20];
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;
	
	printf("Metin dosyasini ve kod dosyasini giriniz : ");
	scanf("%s%s",dosya_adi, kodlar);
	
	dosya1 = fopen(dosya_adi,"r");
	dosya2 = fopen(kodlar,"r");
	dosya3 = fopen("orijinal.txt","w");
	
	if ( dosya1 == NULL || dosya2 == NULL || dosya3 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	do{
		fscanf(dosya2,"%d",&val);
		fseek(dosya1,(val-1)*sizeof(char),SEEK_SET);
		ch = fgetc(dosya1);
		fputc(ch, dosya3);
		
	}while( !feof(dosya2) );
	printf("orijinal.txt basarili bir sekilde olusturuldu");
	fclose(dosya1); fclose(dosya2); fclose(dosya3);
	return 0;
}