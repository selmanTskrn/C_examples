#include <stdio.h>

struct ogrenci{
	char no[15];
	char ad[15];
	char soyad[15];
	int devamsizlik;
};
typedef struct ogrenci Ogrenci;

void ekle(FILE *, Ogrenci []);
void sirala( Ogrenci []);
void yazdir(FILE *, Ogrenci []);

int main()
{
	Ogrenci ogrenciler[27];
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("1927devam.txt","r");
	dosya2 = fopen("1927sirali.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	ekle(dosya1,ogrenciler);
	
	sirala(ogrenciler);
	
	yazdir(dosya2,ogrenciler);
	
	fclose(dosya1); fclose(dosya2);
	return 0;
}
void ekle(FILE *dp, Ogrenci ogrenciler[])
{
	Ogrenci ogrenci1;
	int i;
	
	for (i=0 ; i<27 ; i++)
	{
		fscanf(dp,"%s%s%s%d", ogrenci1.no, ogrenci1.ad, ogrenci1.soyad, &ogrenci1.devamsizlik);
		ogrenciler[i] = ogrenci1;
	}
}
void sirala( Ogrenci ogrenciler[])
{
	Ogrenci yedek;
	int k, m, enBuyuk;
	
	for(k=0 ; k<26 ; k++)
	{
		enBuyuk = k;
		for(m=k+1 ; m<27 ; m++)
		{
			if (ogrenciler[enBuyuk].devamsizlik < ogrenciler[m].devamsizlik)
				enBuyuk = m;
		}
		yedek = ogrenciler[enBuyuk];
		ogrenciler[enBuyuk] = ogrenciler[k];
		ogrenciler[k] = yedek;
	}
}
void yazdir(FILE *dp, Ogrenci ogrenciler[])
{
	int i;
	
	for(i=0 ; i<27 ; i++)
	{
		fprintf(dp,"%s %s %s %d\n",ogrenciler[i].no, ogrenciler[i].ad,
		ogrenciler[i].soyad, ogrenciler[i].devamsizlik);
	}
}