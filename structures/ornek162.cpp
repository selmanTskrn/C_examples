#include <stdio.h>

typedef struct ogrenci{
	char ad[20];
	char soyad[20];
	float ort;
} Ogrenci;
int main()
{
	Ogrenci dizi[10];
	Ogrenci yedek;
	int i, j;
	
	for (i=0 ; i<10 ; i++){
		printf("%d.   ad, soyad, ortalamasini giriniz : ", i+1);
		scanf("%s%s%f", &dizi[i].ad, &dizi[i].soyad, &dizi[i].ort);
	}
	
	for (i=0 ; i<9 ; i++){
		for (j=i+1 ; j<10 ; j++){
			if ( dizi[i].soyad[0] > dizi[j].soyad[0]){
				yedek = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = yedek;
			}
			else if ( (dizi[i].soyad[0] == dizi[j].soyad[0]) ){
				if ((dizi[i].soyad[1] > dizi[j].soyad[1])){
					yedek = dizi[i];
					dizi[i] = dizi[j];
					dizi[j] = yedek;
				}
				else if (dizi[i].soyad[1] == dizi[j].soyad[1]){
					if (dizi[i].soyad[2] > dizi[j].soyad[2]){
							yedek = dizi[i];
							dizi[i] = dizi[j];
							dizi[j] = yedek;
					}
				}	
			}
		}
	}
	printf("\n------LISTE------");
	for (i=0 ; i<10 ; i++){
		printf("\n%s %s %.2f", dizi[i].ad, dizi[i].soyad, dizi[i].ort);
	}
	return 0;
}