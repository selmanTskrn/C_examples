#include <stdio.h>

struct personel{
	int sicil_no;
	char ad[20];
	char soyad[20];
	int satis_miktar;
};
typedef struct personel Personel;

void ekle(FILE *, Personel []);
void farkBulYazdir(FILE *, Personel []);

int main()
{
	Personel personeller[50] = {0,"","",0};
	FILE *dosya1;
	FILE *dosya2;
		
	dosya1 = fopen("1928yillik.dat","r");
	dosya2 = fopen("1928satislar.dat","w");
	
	if(dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar mevcut");
		return 1;
	}
	ekle( dosya1, personeller);
	
	farkBulYazdir(dosya2, personeller);
	
	fclose(dosya1); fclose(dosya2);
	return 0;
}
void ekle(FILE *dp, Personel personeller[])
{
	Personel personel;
	int i=0;
	
	fscanf(dp,"%d%s%s%d", &personel.sicil_no, personel.ad, personel.soyad, &personel.satis_miktar);
	while( !feof(dp))
	{
		personeller[i++] = personel;
		fscanf(dp,"%d%s%s%d", &personel.sicil_no, personel.ad, personel.soyad, &personel.satis_miktar);
	}
}
void farkBulYazdir(FILE *dp, Personel personeller[])
{
	int i, enBuyuk=0;
	
	for(i=0 ; personeller[i].sicil_no != 0 ; i++)
	{
		if(personeller[i].satis_miktar > enBuyuk){
			enBuyuk = personeller[i].satis_miktar;
		}
	}
	for(i=0 ; personeller[i].sicil_no != 0 ; i++)
	{
		fprintf(dp,"%d %s %s %d\n", personeller[i].sicil_no, personeller[i].ad, personeller[i].soyad, enBuyuk-personeller[i].satis_miktar);
	}
}