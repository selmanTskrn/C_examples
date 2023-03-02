#include <stdio.h>

struct personel{
	char soyad[20];
	char ad[20];
	double aylik_satis;
};

typedef struct personel Personel;

void ekleDegistir(FILE *, Personel []);

void siralayarakYazdir(FILE *, Personel []);

int main()
{
	Personel personeller[12] = {"","",0.0};
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("satis.txt","r");
	dosya2 = fopen("prfrmns.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	ekleDegistir( dosya1, personeller);
	
	siralayarakYazdir( dosya2, personeller);
	
	fclose(dosya1); fclose(dosya2);
	return 0;
}
void ekleDegistir(FILE *dp, Personel personeller[])
{
	Personel personel1;
	int i=0;
	double enBuyuk = 0;
	
	for (i=0 ; i<12 ; i++){
		fscanf(dp,"%s%s%lf", personel1.soyad, personel1.ad, &personel1.aylik_satis);
		personeller[i] = personel1;
		if ( enBuyuk < personeller[i].aylik_satis)
			enBuyuk = personeller[i].aylik_satis;
	}
	
	for (i=0 ; i<12 ; i++)
	{
		personeller[i].aylik_satis = enBuyuk - personeller[i].aylik_satis;
	}
}
void siralayarakYazdir(FILE *dp, Personel personeller[])
{
	Personel yedek;
	int k, m, test, enKucuk;
	
	for (k=0 ; k<11 ; k++)
	{
		enKucuk = k;
		test = 0;
		for( m=k+1 ; m<12 ; m++)
		{
			if (personeller[m].ad[0] < personeller[enKucuk].ad[0]){
				enKucuk = m;
				test++;
			}
			else if ( personeller[m].ad[0] == personeller[enKucuk].ad[0] ){
				if (personeller[m].ad[1] < personeller[enKucuk].ad[1]){
					enKucuk = m;
					test++;
				}
			}
		}
		if (test){
			yedek = personeller[enKucuk];
			personeller[enKucuk] = personeller[k];
			personeller[k] = yedek;
		}
	}
	for (k=0 ; k<12 ; k++)
		fprintf(dp,"%s %s %.2lf\n",personeller[k].ad, personeller[k].soyad, personeller[k].aylik_satis);
}