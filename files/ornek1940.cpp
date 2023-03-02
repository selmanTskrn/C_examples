#include <stdio.h>
#include <string.h>
int main()
{
	char ip_adresi[25];
	char web_sitesi[30];
	int test;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("1940gunluk.txt","r");
	dosya2 = fopen("1940tembel.txt","w");
	
	if(dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s%s", ip_adresi, web_sitesi);
	while( !feof(dosya1) ){
		test = 0;
		if (strstr(web_sitesi,"game") != NULL)
			test++;
		else if(strstr(web_sitesi,"oyun") != NULL)
			test++;
		else if(strstr(web_sitesi,"play") != NULL)
			test++;
		else if(strstr(web_sitesi,"kumar") != NULL)
			test++;
		else if(strstr(web_sitesi,"bahis") != NULL)
			test++;
		if(test!=0)
			fprintf(dosya2,"%s\n", ip_adresi);
		
		fscanf(dosya1,"%s%s", ip_adresi, web_sitesi);
	}
	fclose(dosya1); fclose(dosya2);
	return 0;
}