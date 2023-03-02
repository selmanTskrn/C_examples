#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sayidanMorsaCevir( char [], int);

int main()
{
	char hata_kodu[15];
	char mors[10];
	char ch;
	int i, sayi;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("hatalar.txt","r");
	dosya2 = fopen("mors.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s",hata_kodu);
	while( !feof(dosya1) ){
		for( i=0 ; hata_kodu[i]!='\0' ; i++){
			ch = hata_kodu[i];
			sayi = atoi(&ch);
			sayidanMorsaCevir( mors, sayi);
			fprintf(dosya2,"%s ",mors);
		}
		fprintf(dosya2,"\n");
		fscanf(dosya1,"%s",hata_kodu);
	}
	fclose(dosya1); fclose(dosya2);
	return 0;
}
void sayidanMorsaCevir( char mors[], int sayi)
{
	switch (sayi){
		case 0:
			strcpy(mors,"-----");
			break;
		case 1:
			strcpy(mors,".----");
			break;
		case 2:
			strcpy(mors,"..---");
			break;
		case 3:
			strcpy(mors,"...--");
			break;
		case 4:
			strcpy(mors,"....-");
			break;
		case 5:
			strcpy(mors,".....");
			break;
		case 6:
			strcpy(mors,"-....");
			break;
		case 7:
			strcpy(mors,"--...");
			break;
		case 8:
			strcpy(mors,"---..");
			break;
		case 9:
			strcpy(mors,"----.");
			break;
	}
}