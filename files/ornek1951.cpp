#include <stdio.h>

int main()
{
	char plaka[20];
	int koltuk, yolcu;
	int iptal_arac = 0, devam_arac = 0;
	float doluluk;
	
	FILE *dosya1;
	FILE *dosya2;
	FILE *dosya3;
	
	dosya1 = fopen("1951servisler.txt","r");
	dosya2 = fopen("1951iptaller.txt","w");
	dosya3 = fopen("1951devam.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL || dosya3 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	fscanf(dosya1,"%s%d%d",plaka, &koltuk, &yolcu);
	while ( !feof(dosya1) ){
		doluluk = (float)yolcu / koltuk;
		if (doluluk < 0.50){
			fprintf(dosya2,"%s	%.2f\n", plaka, doluluk);
			iptal_arac++;
		}
		else{
			fprintf(dosya3,"%s	%.2f\n", plaka, doluluk);
			devam_arac++;
		}
		fscanf(dosya1,"%s%d%d", plaka, &koltuk, &yolcu);
	}
	fprintf(dosya2,"Toplam %d arac", iptal_arac);
	fprintf(dosya3,"Toplam %d arac", devam_arac);
	
	fclose(dosya1); fclose(dosya2); fclose(dosya3);
	return 0;
}