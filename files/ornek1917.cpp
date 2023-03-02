#include <stdio.h>

struct ogrenci{
	char ad[20];
	char soyad[20];
	float mezP;
	float alesP;
	float udsP;
	float toplamP;
};
typedef struct ogrenci Ogrenci;

int main()
{
	Ogrenci ogrenci1, ogrenci2, yedek;
	Ogrenci ogrenci[5];
	int test, k=0, m, enBuyuk;
	
	
	FILE *dosya1;
	FILE *dosya11;
	FILE *dosya2;
	
	dosya1 = fopen("1917ogrenci.txt","r");
	dosya11 = fopen("1917ogrenci.txt","r");
	dosya2 = fopen("1917kazanan.txt","w");
	
	if (dosya1 == NULL || dosya11 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar mevcut");
		return 1;
	}
	fscanf(dosya1,"%s%s%f%f%f", ogrenci1.ad, ogrenci1.soyad, &ogrenci1.mezP, &ogrenci1.alesP, &ogrenci1.udsP);
	while( !feof(dosya1) ){
		ogrenci1.toplamP = (0.5) * ogrenci1.alesP + 0.25 * ogrenci1.mezP + 0.25 * ogrenci1.udsP;
		rewind(dosya11);
		fscanf(dosya11,"%s%s%f%f%f", ogrenci2.ad, ogrenci2.soyad, &ogrenci2.mezP, &ogrenci2.alesP, &ogrenci2.udsP);
		while( !feof(dosya11) ){
			test = 0;
			ogrenci2.toplamP = (0.5) * ogrenci2.alesP + 0.25 * ogrenci2.mezP + 0.25 * ogrenci2.udsP;
			if( ogrenci2.toplamP > ogrenci1.toplamP)
				test++;
			fscanf(dosya11,"%s%s%f%f%f", ogrenci2.ad, ogrenci2.soyad, &ogrenci2.mezP, &ogrenci2.alesP, &ogrenci2.udsP);
		}
		if ( test < 5){
			ogrenci[k] = ogrenci1;
			k++;
		}
		fscanf(dosya1,"%s%s%f%f%f", ogrenci1.ad, ogrenci1.soyad, &ogrenci1.mezP, &ogrenci1.alesP, &ogrenci1.udsP);
	}
	for (k=0 ; k<4 ; k++)
	{
		enBuyuk = k;
		for (m=k+1 ; m<5 ; m++)
		{
			if ( ogrenci[k].toplamP < ogrenci[m].toplamP)
				enBuyuk = m;
		}
		yedek = ogrenci[enBuyuk];
		ogrenci[enBuyuk] = ogrenci[k];
		ogrenci[k] = yedek;
	}
	for (k=0 ; k<5 ; k++){
		fprintf(dosya2,"%s %s %.2f %.2f %.2f : %.2f\n", ogrenci[k].ad, ogrenci[k].soyad, ogrenci[k].mezP, ogrenci[k].alesP, ogrenci[k].udsP, ogrenci[k].toplamP);
	}
	
	
	fclose(dosya1); fclose(dosya11); fclose(dosya2);
	return 0;
}