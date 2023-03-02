#include <stdio.h>
#include <string.h>

int main()
{
	char asi1[20], asi2[20];
	char tarih[20];
	int zorunlu_asi, asi_adedi = 0;
	char ch;
	
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;
	
	dosya1 = fopen("1950asilar.txt","r");
	dosya2 = fopen("1950zorunlu.txt","r");
	dosya3 = fopen("1950dozlar.txt","w");
	
	if( dosya1 == NULL || dosya2 == NULL || dosya3 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya2,"%s%d", asi2, &zorunlu_asi);
	while( !feof(dosya2) ){
		rewind(dosya1);
		asi_adedi = 0;
		fscanf(dosya1,"%s%s", asi1, tarih);
		while( !feof(dosya1) ){
			if( strcmp(asi1,asi2) == 0){
				asi_adedi++;
			}
			fscanf(dosya1,"%s%s", asi1, tarih);
		}
		if (asi_adedi < zorunlu_asi){
			ch = '-';
		}
		else
			ch = '+';
		fprintf(dosya3,"%s %d %c\n", asi2, asi_adedi, ch);
		fscanf(dosya2,"%s%d", asi2, &zorunlu_asi);
	}
	
	fclose(dosya1); fclose(dosya2); fclose(dosya3);
	return 0;
}