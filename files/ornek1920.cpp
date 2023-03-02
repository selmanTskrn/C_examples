#include <stdio.h>
#include <string.h>
struct yardim{
	float miktar;
	char birim[10];
};

typedef struct yardim Yardim;

void ekle( FILE *, Yardim []);

void yazdir( FILE *, Yardim []);

int main()
{
	Yardim yardimlar[31] = {0.0, "a"} ;
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("yardim.txt","r");
	dosya2 = fopen("toplam.txt","w");
	
	if (dosya1 == NULL || dosya2 == NULL){
		printf("Dosyalardan biri yada fazlasi acilamadi");
		return 1;
	}

	ekle( dosya1, yardimlar);
	
	yazdir( dosya2, yardimlar);
	
	
	return 0;
}
void ekle( FILE *dosya1, Yardim yardimlar[])
{
	Yardim yardim1 ;
	
	int i, test;
	
	fscanf(dosya1, "%f%s", &yardim1.miktar, yardim1.birim);
	
	while( !feof(dosya1) )
	{
		test = 0;
		for (i=0 ; i<31 ; i++)
		{
			if (strcmp( yardimlar[i].birim , yardim1.birim) == 0){
				yardimlar[i].miktar += yardim1.miktar;
				test++;
			}
		}
		if (test == 0){
			for (i=0 ; i<31 ; i++)
			{
				if ( yardimlar[i].miktar == 0){
					strcpy( yardimlar[i].birim , yardim1.birim );
					yardimlar[i].miktar = yardim1.miktar;
					break;
				}
			}
		}
		fscanf(dosya1, "%f%s", &yardim1.miktar, yardim1.birim);
	}
}
void yazdir( FILE *dosya2 , Yardim yardimlar[] )
{
	Yardim yedek;
	int k, m, enBuyuk;
	
	for (k = 0 ; k < 30 ; k++)
	{
		enBuyuk = k;
		for ( m=k+1 ; m<31 ; m++)
		{
			if (yardimlar[m].miktar > yardimlar[enBuyuk].miktar)
				enBuyuk = m;
		}
		strcpy( yedek.birim ,yardimlar[enBuyuk].birim );
		strcpy( yardimlar[enBuyuk].birim , yardimlar[k].birim);
		strcpy( yardimlar[k].birim , yedek.birim);
		
		yedek.miktar = yardimlar[enBuyuk].miktar;
		yardimlar[enBuyuk].miktar = yardimlar[k].miktar;
		yardimlar[k].miktar = yedek.miktar;
	}
	for (k=0 ; k<31 ; k++)
		if( yardimlar[k].miktar != 0)
			fprintf(dosya2 , "%s  %.2f\n" , yardimlar[k].birim , yardimlar[k].miktar);
	
}
