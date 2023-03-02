#include <stdio.h>

int main()
{
	char no[10];
	int notlar[6] = {0};
	int ders[6] = {0};
	float ogrenci_ort = 0;
	FILE *dosya1, *dosya2;
	
	dosya1 = fopen("ornek198sinif.txt", "r");
	dosya2 = fopen("ornek198sonuc.txt", "w");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("dosya acilamadi");
		return 1;
	}
	fscanf(dosya1,"%s%d%d%d%d%d%d", no, &notlar[0], &notlar[1], &notlar[2], &notlar[3], &notlar[4], &notlar[5]);
	while( !feof(dosya1) ){
		ogrenci_ort = (float)(notlar[0] + notlar[1] + notlar[2] + notlar[3] + notlar[4] + notlar[5]) / 6;
		for(int i=0; i<6 ; i++){
			ders[i] += notlar[i];
		}
		fprintf(dosya2,"%s  %.2f\n", no, ogrenci_ort);
		fscanf(dosya1,"%s%d%d%d%d%d%d", no, &notlar[0], &notlar[1], &notlar[2], &notlar[3], &notlar[4], &notlar[5]);
	}
	for(int i=0 ; i<6 ; i++){
		fprintf(dosya2,"%d. dersin sinif ortalamasi : %.2f\n", i+1, (float)ders[i] / 20 );
	}
	fclose(dosya1); fclose(dosya2);
	return 0;
}