#include <stdio.h>
#include <string.h>

int main()
{
	char urun1[15], urun2[15];
	int miktar1, miktar2;
	
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;
	
	dosya1 = fopen("1948istek.txt","r");
	dosya2 = fopen("1948depo.txt","r");
	dosya3 = fopen("1948nekaldi.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL || dosya3 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya2,"%s%d", urun2, &miktar2);
	while( !feof(dosya2) ){
		rewind(dosya1);
		fscanf(dosya1,"%s%d", urun1, &miktar1);
		while( !feof(dosya1) ){
			if (strcmp(urun1 , urun2) == 0){
				miktar2 -= miktar1;
			}
			fscanf(dosya1,"%s%d", urun1, &miktar1);
		}
		
		if (miktar2 < 0){
			fprintf(dosya3,"%s karsilanamaz\n", urun2);
		}
		else{
			fprintf(dosya3,"%s %d\n", urun2, miktar2);
		}
		fscanf(dosya2,"%s%d", urun2, &miktar2);
	}
	fclose(dosya1); fclose(dosya2); fclose(dosya3);
	return 0;
}