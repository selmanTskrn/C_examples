#include <stdio.h>
#include <string.h>
int main()
{
	char adres1[35], adres2[35];
	int test;
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya21;
	
	dosya1 = fopen("akademik.txt","r");
	dosya2 = fopen("eposta.txt","w+");
	
	if (dosya1 == NULL || dosya2 == NULL ){
		printf("Dosyalardan biri ya da fazlasi acilamadi");
		return 1;
	}
	
	do{
		fscanf(dosya1,"%s",adres1);
		test = 1;
		rewind(dosya2);
		fscanf(dosya2,"%s",adres2);
		while( !feof(dosya2) ){
			if ( strcmp(adres1 , adres2) == 0){
				test = 0;
			}
			fscanf(dosya2,"%s",adres2);
		}
		if ( test )
			fprintf(dosya2,"%s \n",adres1);
		
	}while( !feof(dosya1) );
	fclose(dosya1); fclose(dosya2);
	return 0;
}