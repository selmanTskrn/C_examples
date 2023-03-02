#include <stdio.h>

struct ogrenci{
	char ad[20];
	char soyad[20];
	float ort;
};
int main()
{
	struct ogrenci dizi[10];
	struct ogrenci t;
	int i, j;
	
	for (i=0 ; i<10 ; i++){
		printf("%d.	adi, soyadi, ortalamasini giriniz: ", i+1);
		scanf("%s%s%f", &dizi[i].ad, &dizi[i].soyad, &dizi[i].ort);
	}
	for (i=0 ; i<9 ; i++){
		for (j=i+1 ; j<10 ; j++){
			if ( dizi[i].ort < dizi[j].ort ){
				t = dizi[i];
				dizi[i] = dizi[j];
				dizi[j] = t;
			}
		}
	}
	printf("\n--------LISTE--------");
	
	for ( i=0 ; i<10 ; i++){
		printf("\n%s %s %.2f",dizi[i].ad, dizi[i].soyad, dizi[i].ort);
	}
	
	
	
	return 0;
}