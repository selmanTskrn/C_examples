#include <stdio.h>
#include <string.h>
#include <ctype.h>

int score( char [], char []);
int main()
{
	char no[15], enYuksekNo[15];
	char cevaplar[51];
	char key[51];
	int skor, enYuksek = 0;
	
	FILE *dosya1;
	
	if ((dosya1 = fopen("students.txt","r")) == NULL){
		printf("Dosya acilamadi");
		return 1;
	}
	
	printf("Enter Key:\n");
	scanf("%s", key);
	
	fscanf(dosya1,"%s%s", no, cevaplar);
	while( !feof(dosya1) ){
		skor = score(cevaplar , key);
		if (skor > enYuksek){
			enYuksek = skor;
			strcpy(enYuksekNo , no);
		}
		fscanf(dosya1,"%s%s", no, cevaplar);
	}
	
	printf("Best Score :\n"
	"%s (%d)", enYuksekNo, enYuksek);

	fclose(dosya1);
	return 0;
}
int score( char cevaplar[], char key[])
{
	int i, skor = 0;
	for (i=0 ; cevaplar[i]!='\0' ; i++){
		if (tolower(cevaplar[i]) == tolower(key[i]))
			skor++;
	}
	return skor;
}