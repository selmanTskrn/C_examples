#include <stdio.h>

struct ogrenci{
	char ad[20];
	char soyad[20];
	float not1;
	float not2;
	float not3;
};

typedef struct ogrenci Ogrenci;

int main()
{
	Ogrenci ogrenciler[100];
	int i=0, k;
	float ort;
	float bolum_ort = 0.0;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("1925ogrenci.txt","r");
	dosya2 = fopen("1925tekrar.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s%s%f%f%f", ogrenciler[i].ad, ogrenciler[i].soyad, &ogrenciler[i].not1, &ogrenciler[i].not2, &ogrenciler[i].not3);
	
	while( !feof(dosya1) ){
		ort = (ogrenciler[i].not1 + ogrenciler[i].not2 + ogrenciler[i].not3) / 3.0;
		bolum_ort += ort;
		i++;
		fscanf(dosya1,"%s%s%f%f%f", ogrenciler[i].ad, ogrenciler[i].soyad, &ogrenciler[i].not1, &ogrenciler[i].not2, &ogrenciler[i].not3);
	}
	
	bolum_ort /= i;
	
	for (k=0 ; k <= i ; k++)
	{
		ort = (ogrenciler[k].not1 + ogrenciler[k].not2 + ogrenciler[k].not3) / 3;
		if ( bolum_ort > ort){
			fprintf(dosya2,"%s %s\n%.4f\n", ogrenciler[k].ad, ogrenciler[k].soyad, ort);
		}
	}
	
	fclose(dosya1); fclose(dosya2);
	return 0;
}
