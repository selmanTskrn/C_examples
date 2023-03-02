#include <stdio.h>
#include <string.h>
#include <ctype.h>
float similar_text(char [], char []);
int main()
{
	char kelime1[20];
	char kelime2[20], benzer[20];
	float benzerlik, enBenzer = 0;
	
	FILE *dosya1;
	
	if ((dosya1 = fopen("1934words.txt","r")) == NULL){
		printf("Dosya1 acilamadi");
		return 1;
	}
	printf("Search: ");
	scanf("%s",kelime1);
	
	fscanf(dosya1,"%s",kelime2);
	while( !feof(dosya1) ){
		benzerlik = similar_text(kelime1,kelime2);
		if(benzerlik > enBenzer){
			enBenzer = benzerlik;
			strcpy(benzer,kelime2);
		}
		fscanf(dosya1,"%s",kelime2);
	}
	if(enBenzer != 0)
		printf("Did you mean? %s (%.2f)",benzer,enBenzer);
	else
		printf("No matching");
	fclose(dosya1);
	return 0;
}
float similar_text(char kelime1[], char kelime2[])
{
	float benzerlik=0, harf_sayisi=0;
	int i;
	
	for (i=0 ; kelime1[i] != '\0' ; i++){
		if(toupper(kelime1[i]) == toupper(kelime2[i]))
			benzerlik++;
		harf_sayisi++;
	}
	benzerlik /= harf_sayisi;
	return benzerlik;
}