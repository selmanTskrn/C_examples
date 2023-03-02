#include <stdio.h>
#include <string.h>

int main()
{
	char tcNo1[20], tcNo2[20];
	int test;
	float burs1, burs2;
	float toplam = 0;
	
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;
	
	dosya1 = fopen("1955burs.txt","r");
	dosya2 = fopen("1955verilen.txt","r");
	dosya3 = fopen("1955almayan.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL || dosya3 == NULL ){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s%f", tcNo1, &burs1);
	while( !feof(dosya1) ){
		rewind(dosya2);
		test = 0;
		fscanf(dosya2,"%s%f", tcNo2, &burs2);
		while( !feof(dosya2) ){
			if ( strcmp(tcNo1,tcNo2) == 0){
				test++;
			}
			fscanf(dosya2,"%s%f", tcNo2, &burs2);
		}
		if(test == 0){
			fprintf(dosya3,"%s %.2f\n",tcNo1, burs1);
			toplam += burs1;
		}
		fscanf(dosya1,"%s%f", tcNo1, &burs1);
	}
	fprintf(dosya3,"Toplam	: %.2f", toplam);
	fclose(dosya1); fclose(dosya2); fclose(dosya3);
	return 0;
}