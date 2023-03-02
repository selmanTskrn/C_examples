#include <stdio.h>
#include <string.h>

struct arac{
	char plaka[20];
	int saat;
	int dakika;
	int saniye;
};
typedef struct arac Arac;

int main()
{
	Arac arac_bas, arac_son;
	long zaman;
	float hiz;
	
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;
	
	dosya1 = fopen("1949ankara.txt","r");
	dosya2 = fopen("1949golbasi.txt","r");
	dosya3 = fopen("1949ceza.txt","w");
	
	if(dosya1 == NULL || dosya2 == NULL || dosya3 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s%d%d%d", arac_bas.plaka, &arac_bas.saat, &arac_bas.dakika, &arac_bas.saniye);
	while( !feof(dosya1) ){
		rewind(dosya2);
		fscanf(dosya2,"%s%d%d%d", arac_son.plaka, &arac_son.saat, &arac_son.dakika, &arac_son.saniye);
		while( !feof(dosya2) ){
			if(strcmp(arac_bas.plaka, arac_son.plaka) == 0){
				zaman = (arac_son.saat - arac_bas.saat)*3600 + (arac_son.dakika - arac_bas.dakika)*60 + (arac_son.saniye - arac_bas.saniye);
				hiz = 7330*3.6 / (float)zaman;
				if ( hiz > 70 ){
					fprintf(dosya3,"%s %.2f\n", arac_bas.plaka, hiz);
				}
				break;
			}
			fscanf(dosya2,"%s%d%d%d", arac_son.plaka, &arac_son.saat, &arac_son.dakika, &arac_son.saniye);
		}
		fscanf(dosya1,"%s%d%d%d", arac_bas.plaka, &arac_bas.saat, &arac_bas.dakika, &arac_bas.saniye);
	}
	fclose(dosya1); fclose(dosya2); fclose(dosya3);
	return 0;
}