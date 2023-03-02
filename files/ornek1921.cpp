#include <stdio.h>
#include <string.h>

struct daire{
	char ad[20];
	char soyad[20];
	float aidat;
};
typedef struct daire Daire;

void ekle(FILE *, Daire []);

void yazdir(FILE *, Daire[]);

int main()
{
	Daire daireler[15] = {"","",0.0};
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("aidat.txt","r");
	dosya2 = fopen("1921toplam.txt","w");
	if (dosya1 == NULL || dosya2 == NULL ){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	ekle( dosya1, daireler);
	yazdir(dosya2, daireler);
	
	fclose(dosya1); fclose(dosya2);
	return 0;
}
void ekle(FILE *dp, Daire daireler[])
{
	Daire daire;
	int i, test;
	
	do{
		fscanf(dp,"%s%s%f", daire.ad, daire.soyad, &daire.aidat);
		test = 0;
		for (i=0 ; i<15 ; i++)
		{
			if( strcmp(daireler[i].ad , daire.ad) == 0 && strcmp(daireler[i].soyad, daire.soyad) == 0){
				daireler[i].aidat += daire.aidat;
				test++;
			}
		}
		if (test == 0){
			for (i=0 ; i<15 ; i++)
			{
				if( daireler[i].aidat == 0){
					daireler[i] = daire;
					break;
				}
			}
		}
	}while( !feof(dp) );
}
void yazdir(FILE *dp, Daire daireler[])
{
	int i;
	
	for(i=0 ; daireler[i].aidat != 0 ; i++)
		fprintf(dp,"%s %s	%.2f\n", daireler[i].ad, daireler[i].soyad, daireler[i].aidat);
	
}