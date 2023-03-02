#include <stdio.h>
#include <string.h>

struct oyuncular{
	char ad[20];
	char soyad[20];
	int mac_sayisi;
	int hatali_pas;
	int isabetli_pas;
};
typedef struct oyuncular Oyuncu;

void ekle(FILE *, Oyuncu []);

void yazdir(FILE *, Oyuncu []);

int main()
{
	Oyuncu oyuncular[20] = { "" , "" , 0 , 0 , 0 };
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("paslar.txt","r");
	dosya2 = fopen("1922toplam.txt","w");
	
	if ( dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	ekle( dosya1, oyuncular);
	yazdir( dosya2, oyuncular);
	
	fclose(dosya1); fclose(dosya2);
	return 0;
}
void ekle(FILE *dp, Oyuncu oyuncular[])
{
	Oyuncu oyuncu1;
	int i, test;
	
	do{
		fscanf(dp,"%s%s%d%d", oyuncu1.ad, oyuncu1.soyad, &oyuncu1.hatali_pas, &oyuncu1.isabetli_pas);
		oyuncu1.mac_sayisi = 0;
		test = 0;
		for(i=0 ; oyuncular[i].isabetli_pas != 0 ; i++)
		{
			if( strcmp(oyuncular[i].ad , oyuncu1.ad) == 0 && strcmp(oyuncular[i].soyad , oyuncu1.soyad) == 0){
				oyuncular[i].hatali_pas += oyuncu1.hatali_pas;
				oyuncular[i].isabetli_pas += oyuncu1.isabetli_pas;
				oyuncular[i].mac_sayisi++;
				test++;
			}
		}
		if (test==0){
			for(i=0 ; i<20 ; i++){
				if ( oyuncular[i].mac_sayisi == 0){
					oyuncular[i] = oyuncu1;
					oyuncular[i].mac_sayisi++;
					break;
				}
			}
		}
	}while( !feof(dp) );
}
void yazdir(FILE *dp, Oyuncu oyuncular[])
{
	int i;
	
	for (i=0 ; oyuncular[i].mac_sayisi != 0 ; i++){
		fprintf(dp,"%s %s %d %d %d\n",oyuncular[i].ad, oyuncular[i].soyad, oyuncular[i].mac_sayisi, oyuncular[i].hatali_pas, oyuncular[i].isabetli_pas);
	}
}