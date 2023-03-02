#include <stdio.h>

int main()
{
	int puanlar[8][10];
	int puan, toplam, enDusuk, i=0, enYuksekPuan=0;
	int enBegenilen, enBegenmeyen;
	
	
	FILE *dosya1;
	FILE *dosya2;
	
	dosya1 = fopen("1938puanlar.txt","r");
	dosya2 = fopen("1938sonuc.txt","w");
	
	if(dosya1 == NULL || dosya2 == NULL){
		printf("Acilamayan dosyalar var");
		return 1;
	}
	
	for (int k=0 ; k<8 ; k++)
	{
		for(i=0 ; i<10 ; i++)
		{
			fscanf(dosya1,"%d", &puan);
			puanlar[k][i] = puan;
		}
	}
	for (int k=0 ; k<8 ; k++)
	{
		toplam = 0;
		for(i=0 ; i<10 ; i++)
		{
			toplam += puanlar[k][i];
		}
		if (enYuksekPuan < toplam){
			enYuksekPuan = toplam;
			enBegenilen = k+1;
			enDusuk = puanlar[k][0];
			for(i=1 ; i<10 ; i++){
				if(puanlar[k][i] < enDusuk){
					enDusuk = puanlar[k][i];
					enBegenmeyen = i+1;
				}
			}
		}
	}
	fprintf(dosya2,"Encok begenilen urun : no %d\n"
	"Enaz begenen aile no : %d", enBegenilen, enBegenmeyen);
	fclose(dosya1); fclose(dosya2);
	return 0;
}