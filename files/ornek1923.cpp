#include <stdio.h>
#include <string.h>
#include <math.h>

struct ogrenci{
	char no[12];
	char ad[20];
	char soyad[20];
	float quiz;
};

typedef struct ogrenci Ogrenci;

void ekleDegistir(FILE *, Ogrenci []);

void siralayarakYazdir(FILE *,Ogrenci []);

int main()
{
	Ogrenci ogrenciler[24];
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("quiz.txt","r");
	dosya2 = fopen("stdquiz.txt","w");
	
	if ( dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	ekleDegistir( dosya1, ogrenciler);
	
	siralayarakYazdir( dosya2, ogrenciler);
	
	fclose(dosya1); fclose(dosya2);
	return 0;
}
void ekleDegistir( FILE *dp, Ogrenci ogrenciler[])
{
	Ogrenci ogrenci1;
	int i=0, test;
	float not_toplam = 0, karenot_toplam = 0;
	float sapma, ortalama;
	
	do{
		fscanf(dp,"%s%s%s%f", ogrenci1.no, ogrenci1.ad, ogrenci1.soyad, &ogrenci1.quiz);
		ogrenciler[i] = ogrenci1;
		not_toplam += ogrenci1.quiz;
		karenot_toplam += pow(ogrenci1.quiz,2.0);
		i++;
	}while( !feof(dp) );
	rewind(dp);
	sapma = sqrt((24*(karenot_toplam) - pow(not_toplam,2.0)) / (24 * 23));
	ortalama = not_toplam / 24.0;
	for (i=0 ; i<24 ; i++)
	{
		ogrenciler[i].quiz = (ogrenciler[i].quiz - ortalama) / sapma;
	}
}
void siralayarakYazdir( FILE *dp, Ogrenci ogrenciler[])
{
	Ogrenci yedek;
	int k, m, enBuyuk;
	
	for(k=0 ; k<23 ; k++)
	{
		enBuyuk = k;
		for (m=k+1 ; m<24 ; m++)
		{
			if (ogrenciler[m].quiz > ogrenciler[enBuyuk].quiz){
				enBuyuk = m;
			}
		}
		yedek = ogrenciler[enBuyuk];
		ogrenciler[enBuyuk] = ogrenciler[k];
		ogrenciler[k] = yedek;
	}
	for (k=0 ; k<24 ; k++)
	{
		fprintf(dp,"%s %s %s %.2f\n", ogrenciler[k].no, ogrenciler[k].ad, ogrenciler[k].soyad, ogrenciler[k].quiz);
	}/**/
}