#include <stdio.h>
typedef struct ogrenci{
	int sira;
	char ad[20];
	char soyad[20];
	float ort;
	char cins;
}Ogrenci;
void takas( Ogrenci *, Ogrenci *);
int main()
{
	Ogrenci a1 = { 2, "Ahmet", "Gedik", 2.3, 'E'};
	Ogrenci a2 = { 5, "Oya", "Turkali", 4.3, 'K'};
	
	printf("Sira : %d\nAd : %s\nSoyad : %s\nOrtalama : %.2f\nCinsiyet : %c\n",
	a1.sira, a1.ad, a1.soyad, a1.ort, a1.cins);
	printf("\nSira : %d\nAd : %s\nSoyad : %s\nOrtalama : %.2f\nCinsiyet : %c\n",
	a2.sira, a2.ad, a2.soyad, a2.ort, a2.cins);
	takas( &a1, &a2 );
	printf("\nTAKAS SONRASI\n");
	printf("\nSira : %d\nAd : %s\nSoyad : %s\nOrtalama : %.2f\nCinsiyet : %c\n",
	a1.sira, a1.ad, a1.soyad, a1.ort, a1.cins);
	printf("\nSira : %d\nAd : %s\nSoyad : %s\nOrtalama : %.2f\nCinsiyet : %c\n",
	a2.sira, a2.ad, a2.soyad, a2.ort, a2.cins);
	return 0;
}
void takas( Ogrenci *ptr1, Ogrenci *ptr2)
{
	Ogrenci yedek;
	yedek = (*ptr1);
	*ptr1 = (*ptr2);
	(*ptr2) = yedek;
}